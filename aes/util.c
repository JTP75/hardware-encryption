#pragma once

#include <stdio.h>
#include <stdint.h>

/// @brief perform galois multiplication
/// @param a first multiplicand
/// @param b second multiplicand
/// @return galois product
///
/// @see Galois field math in C from [GitHub](https://github.com/catid/gf256)
uint8_t gmul(uint8_t a, uint8_t b) {
    uint8_t rslt = 0;
    for (; b; b>>=1) {
        if (b & 1) {
            rslt ^= a;
        } if (a & 0x80) {
            a = (a<<1) ^ 0x1b;
        } else {
            a <<= 1;
        }
    }
    return rslt;
}

/// @brief rotate word left by one byte
/// @param word input ref
void rotate_word(uint8_t *word) {
    uint8_t tmp = word[0];
    for (int i=0; i<3; i++) word[i] = word[i+1];
    word[3] = tmp;
}

/// @brief prints a message and byte array formatted as "{msg}{block}\n"
/// @param msg cstr message preceding bytes
/// @param block immut byte array ref
/// @param num_bytes length of byte array
void print_block(const char *msg, const uint8_t *bytes, int num_bytes) {
    printf(msg);
    for (int i=0; i<num_bytes-1; i++) {
        printf("%02x:", bytes[i]);
    }
    printf("%02x\n", bytes[num_bytes-1]);
}