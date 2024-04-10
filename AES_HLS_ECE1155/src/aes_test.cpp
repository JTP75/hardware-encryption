#include <stdio.h>

#include "aes_sw.hpp"
#include "aes_hw.hpp"

int eq(const uint8_t *a, const uint8_t *b) {
	for (int i=0; i<16; i++) {
		if (a[i]!=b[i]) {
			return 0;
		}
	}
	return 1;
}

const uint8_t plaintext[16] = {
		0x00,0x01,0x02,0x03,
    	0x04,0x05,0x06,0x07,
    	0x08,0x09,0x0a,0x0b,
    	0x0c,0x0d,0x0e,0x0f};

const uint8_t key128[16] = {
		0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x00,
    	0x00,0x00,0x00,0x19};

const uint8_t key192[24] = {
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x19};

const uint8_t key256[32] = {
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x19};

int main() {

	uint8_t ciphertext_s[16],plaintext_out_s[16],
			ciphertext_h[16],plaintext_out_h[16];

	printf("PERFORMING SOFTWARE ENCRYPTION... ");
	aes128_encrypt_block(plaintext, key128, ciphertext_s);
	aes128_decrypt_block(ciphertext_s, key128, plaintext_out_s);
	if (eq(plaintext,plaintext_out_s)) {
		printf("SUCCESS\r\n");
	} else {
		printf("FAILED\r\n");
	}

	printf("PERFORMING HARDWARE ENCRYPTION... ");
	aes128_encrypt_block_hw(plaintext, key128, ciphertext_h);
	aes128_decrypt_block_hw(ciphertext_h, key128, plaintext_out_h);
	if (eq(plaintext,plaintext_out_h)) {
		printf("SUCCESS\r\n");
	} else {
		printf("FAILED\r\n");
	}

	return 0;
}