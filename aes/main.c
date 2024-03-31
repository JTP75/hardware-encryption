#include <stdio.h>

#include "aes128.c"
#include "aes192.c"
#include "aes256.c"

/// @file main.c
/// @authors Justin Pacella (JTP75@pitt.edu)
/// @todo add you names & emails as above
///
/// @note tested with gcc version 6.3.0 (MinGW.org GCC-6.3.0-1)
///
/// @date 2024-3-26
/// @since 2024-3-26
///
/// @see [AES primary source](https://nvlpubs.nist.gov/nistpubs/fips/nist.fips.197.pdf)
/// @see AES implementations in C from [GitHub](https://github.com/m3y54m/aes-in-c/tree/main)
/// @see Galois field math in C from [GitHub](https://github.com/catid/gf256)

int main(int argc, char **argv) {
    printf("\n");
    
    uint8_t plain[16] = {
        0x00,0x01,0x02,0x03,
        0x04,0x05,0x06,0x07,
        0x08,0x09,0x0a,0x0b,
        0x0c,0x0d,0x0e,0x0f};
    uint8_t key128[16] = {
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x19};
    uint8_t key192[24] = {
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x19};
    uint8_t key256[32] = {
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x19};
    uint8_t cipher128[16], plain_out128[16],
            cipher192[16], plain_out192[16],
            cipher256[16], plain_out256[16];

    aes128_encrypt_block(plain, key128, cipher128);
    aes128_decrypt_block(cipher128, key128, plain_out128);
    
    aes192_encrypt_block(plain, key192, cipher192);
    aes192_decrypt_block(cipher192, key192, plain_out192);
    
    aes256_encrypt_block(plain, key256, cipher256);
    aes256_decrypt_block(cipher256, key256, plain_out256);
    
    printf("\n=========================================================== AES 128 ===========================================================\n");
    print_block("key:           ", key128, 16);
    print_block("\nplaintext:     ", plain, 16);
    printf("=> encrypt =>\n");
    print_block("ciphertext:    ", cipher128, 16);
    printf("=> decrypt =>\n");
    print_block("plaintext:     ", plain_out128, 16);
    
    printf("\n=========================================================== AES 192 ===========================================================\n");
    print_block("key:           ", key192, 24);
    print_block("\nplaintext:     ", plain, 16);
    printf("=> encrypt =>\n");
    print_block("ciphertext:    ", cipher192, 16);
    printf("=> decrypt =>\n");
    print_block("plaintext:     ", plain_out192, 16);
    
    printf("\n=========================================================== AES 256 ===========================================================\n");
    print_block("key:           ", key256, 32);
    print_block("\nplaintext:     ", plain, 16);
    printf("=> encrypt =>\n");
    print_block("ciphertext:    ", cipher256, 16);
    printf("=> decrypt =>\n");
    print_block("plaintext:     ", plain_out256, 16);
    
    printf("\n");
    return 0;
}