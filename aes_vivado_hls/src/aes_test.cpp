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

uint8_t plaintext1[16] = {
		0x57,0x65,0x20,0x74,
		0x68,0x65,0x20,0x50,
		0x65,0x6F,0x70,0x6C,
		0x65,0x20,0x6F,0x66};

uint8_t plaintext2[16] = {
		0x20,0x74,0x68,0x65,
		0x20,0x55,0x6E,0x69,
		0x74,0x65,0x64,0x20,
		0x53,0x74,0x61,0x74};

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

	uint8_t ciphertext_s1[16],plaintext_out_s1[16],
			ciphertext_h1[16],plaintext_out_h1[16],
			ciphertext_s2[16],plaintext_out_s2[16],
			ciphertext_h2[16],plaintext_out_h2[16];
	stream_t sin,sout;

	printf("PERFORMING SOFTWARE ENCRYPTION... ");

	aes128_encrypt_block(plaintext1, key128, ciphertext_s1);
	aes128_decrypt_block(ciphertext_s1, key128, plaintext_out_s1);

	if (eq(plaintext1,plaintext_out_s1)) {
		printf("SUCCESS\r\n");
	} else {
		printf("FAILED\r\n");
	}

	printf("PERFORMING HARDWARE ENCRYPTION... ");

	array2stream(plaintext1, sin);
	aes128_encrypt_block_hw(sin, sout);
	stream2array(sout, ciphertext_h1);

	aes128_decrypt_block_hw(ciphertext_h1, key128, plaintext_out_h1);

	if (eq(plaintext1,plaintext_out_h1)) {
		printf("SUCCESS\r\n");
	} else {
		printf("FAILED\r\n");
	}

	return 0;
}

void array2stream(uint8_t *array, stream_t &stream)
{
	for (int i = 0; i < 16; ++i) {
		beat_t val;
		val.data(7, 0) = array[i];
		val.keep(0, 0) = 0x1;
		val.last.set_bit(0, i == 16-1);
		stream << val;
	}
}

void stream2array(stream_t &stream, uint8_t *array)
{
	for (int i = 0; i < 16; ++i) {
		beat_t val;
		stream >> val;

		/* test last signal assertion */
		if (i == 16-1 && val.last.get_bit(0) == 0) {
			printf("ERROR: last signal was not asserted in the last beat\n");
		}
		if (i != 16-1 && val.last.get_bit(0) == 1) {
			printf("ERROR: last signal was asserted before the last beat\n");
		}
		if (val.keep.get() != 0x1) {
			printf("ERROR: keep was 0x%X not %X\n", val.keep.get(), 0x1);
		}

		array[i] = val.data(7, 0);
	}
}
