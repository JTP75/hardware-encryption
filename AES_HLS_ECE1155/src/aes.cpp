#include "aes.hpp"

void run_aes_hw() {			// <-- HLS top function
	uint8_t ciphertext[16];
	aes128_encrypt_block_hw(plaintext, key128, ciphertext);
}

void run_aes_sw() {
	uint8_t ciphertext[16];
	aes128_encrypt_block(plaintext, key128, ciphertext);
}