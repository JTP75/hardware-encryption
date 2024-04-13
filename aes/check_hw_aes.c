#include <stdio.h>
#include <assert.h>

#include "aes128.c"

int eq(const unsigned char *a, const unsigned char *b) {
    for (int i=0; i<16; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("\n");

    const unsigned char plaintext[16] = {
        0x57,0x8f,0xc5,0x11,
        0x7e,0x3d,0xb2,0x80,
        0xbb,0xa7,0x0e,0xa9,
        0x11,0x59,0x40,0xa2
    };
    const unsigned char key[16] = {
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x19
    };
    const unsigned char ciphertext_hw[16] = {
        0xe4,0x12,0x17,0x0f,
        0xd7,0x70,0x5c,0x2d,
        0xf6,0x97,0xbc,0x10,
        0x30,0x75,0xae,0x10
    };
    unsigned char ciphertext_sw[16];

    aes128_encrypt_block(plaintext, key, ciphertext_sw);
    assert(eq(ciphertext_hw, ciphertext_sw));

    print_block("Plaintext:             ", plaintext, 16);
    printf("\n");
    print_block("Software Ciphertext:   ", ciphertext_sw, 16);
    print_block("Hardware Ciphertext:   ", ciphertext_hw, 16);
    printf("\n");

}