#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "box.h"
#include "util.c"

/// @cite https://nvlpubs.nist.gov/nistpubs/fips/nist.fips.197.pdf
/// @cite https://github.com/m3y54m/aes-in-c/tree/main

void aes128_expand_key(const uint8_t *key, uint8_t *expanded_key);

void aes128_sub_bytes(uint8_t *state);
void aes128_sub_bytes_inv(uint8_t *state);

void aes128_shift_row(uint8_t *state, uint8_t n);
void aes128_shift_row_inv(uint8_t *state, uint8_t n);
void aes128_shift_rows(uint8_t *state);
void aes128_shift_rows_inv(uint8_t *state);

void aes128_mix_column(uint8_t *column);
void aes128_mix_column_inv(uint8_t *column);
void aes128_mix_columns(uint8_t *state);
void aes128_mix_columns_inv(uint8_t *state);

void aes128_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key);
void aes128_add_round_key(uint8_t *state, const uint8_t *round_key);

void aes128_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);
void aes128_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);

/// @brief encrypts a 128 bit block using aes128
/// @param in 128 bit (16 byte) plaintext as byte array
/// @param key 128 bit (16 byte) key as byte array
/// @param out 128 bit (16 byte) ciphertext output as byte array
void aes128_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[176];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes128_expand_key(key, expanded_key);
    aes128_extract_round_key(expanded_key, round_key);
    aes128_add_round_key(state, round_key);
    for (i=1; i<10; i++) {
        aes128_extract_round_key((expanded_key + 16*i), round_key);
        aes128_sub_bytes(state);
        aes128_shift_rows(state);
        aes128_mix_columns(state);
        aes128_add_round_key(state, round_key);
    }
    aes128_sub_bytes(state);
    aes128_shift_rows(state);
    aes128_extract_round_key((expanded_key + 160), round_key);
    aes128_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}

/// @brief decrypts a 128 bit block using aes128
/// @param in 128 bit (16 byte) ciphertext byte array
/// @param key 128 bit (16 byte) key byte array
/// @param out 128 bit (16 byte) plaintext output byte array
void aes128_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[176];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes128_expand_key(key, expanded_key);
    aes128_extract_round_key((expanded_key + 160), round_key);
    aes128_add_round_key(state, round_key);
    for (i=9; i>0; i--) {
        aes128_extract_round_key((expanded_key + 16*i), round_key);
        aes128_shift_rows_inv(state);
        aes128_sub_bytes_inv(state);
        aes128_add_round_key(state, round_key);
        aes128_mix_columns_inv(state);
    }
    aes128_shift_rows_inv(state);
    aes128_sub_bytes_inv(state);
    aes128_extract_round_key(expanded_key, round_key);
    aes128_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}

/// @brief expands a 16 byte key to a 16*(10+1) byte expanded key
/// @param key 16 byte input
/// @param expanded_key 176 byte output
void aes128_expand_key(const uint8_t *key, uint8_t *expanded_key) {
    int i=0, j=1, size=0;
    uint8_t tmp[4];

    while (size<16) {
        expanded_key[size] = key[size++];
    }

    while (size<176) {
        for (i=0; i<4; i++) {
            tmp[i] = expanded_key[i + size-4];
        } 
        if (size%16==0) {
            rotate_word(tmp);
            for (i=0; i<4; i++) {
                tmp[i] = sbox[tmp[i]];
            }
            tmp[0] ^= rcon[j++];
        } 
        for (i=0; i<4; i++) {
            expanded_key[size] = expanded_key[size-16] ^ tmp[i];
            size++;
        }
    }
}

/// @brief substitute each byte of a block using sbox table in box.h
/// @param state ref
void aes128_sub_bytes(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = sbox[state[i]];
    }
}

/// @brief substitute each byte of a block using rsbox table in box.h
/// @param state ref
void aes128_sub_bytes_inv(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = rsbox[state[i]];
    }
}

/// @brief rotate four byte row left by n positions
/// @param state ref
/// @param n shift amount
void aes128_shift_row(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[0];
        for (int j=0; j<3; j++) state[j] = state[j+1];
        state[3] = tmp;
    }
}

/// @brief rotate four byte row right by n positions
/// @param state ref
/// @param n shift amount
void aes128_shift_row_inv(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[3];
        for (int j=3; j>0; j--) state[j] = state[j-1];
        state[0] = tmp;
    }
}

/// @brief shift each row of a block
/// @param state ref
void aes128_shift_rows(uint8_t *state) {
    for (int i=0; i<4; i++) aes128_shift_row(state + 4*i, i);
}

/// @brief shift each row of a block inverse
/// @param state ref
void aes128_shift_rows_inv(uint8_t *state) {
    for (int i=0; i<4; i++) aes128_shift_row_inv(state + 4*i, i);
}

/// @brief mix a column using matmul with galois field operations
/// @param column ref
void aes128_mix_column(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],2) ^ gmul(copy[1],3) ^ gmul(copy[2],1) ^ gmul(copy[3],1);
    column[1] = gmul(copy[0],1) ^ gmul(copy[1],2) ^ gmul(copy[2],3) ^ gmul(copy[3],1);
    column[2] = gmul(copy[0],1) ^ gmul(copy[1],1) ^ gmul(copy[2],2) ^ gmul(copy[3],3);
    column[3] = gmul(copy[0],3) ^ gmul(copy[1],1) ^ gmul(copy[2],1) ^ gmul(copy[3],2);
}

/// @brief mix a column using matmul with galois field operations with multiplicative inverses
/// @param column ref
void aes128_mix_column_inv(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],14) ^ gmul(copy[1],11) ^ gmul(copy[2],13) ^ gmul(copy[3],9);
    column[1] = gmul(copy[0],9) ^ gmul(copy[1],14) ^ gmul(copy[2],11) ^ gmul(copy[3],13);
    column[2] = gmul(copy[0],13) ^ gmul(copy[1],9) ^ gmul(copy[2],14) ^ gmul(copy[3],11);
    column[3] = gmul(copy[0],11) ^ gmul(copy[1],13) ^ gmul(copy[2],9) ^ gmul(copy[3],14);
}

/// @brief mix each column of a block
/// @param state ref
void aes128_mix_columns(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes128_mix_column(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}

/// @brief mix each column of a block using inverse mixing
/// @param state ref
void aes128_mix_columns_inv(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes128_mix_column_inv(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}

/// @brief get round key value from slice of expanded key
/// @param expanded_key 16 byte slice of expanded key as (ref + offset)
/// @param round_key 16 byte round key output
void aes128_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            round_key[i + 4*j] = expanded_key[4*i + j];
        }
    }
}

/// @brief add round key to state by XORing each byte
/// @param state ref
/// @param round_key 16 byte round key ref
void aes128_add_round_key(uint8_t *state, const uint8_t *round_key) {
    for (int i=0; i<16; i++) state[i] ^= round_key[i];
}