#ifndef __AES_HPP__
#define __AES_HPP__

#include <stdint.h>
#include <stdio.h>

#include "aes_sw.hpp"
#include "aes_hw.hpp"

void run_aes_hw();
void run_aes_sw();

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

#else
#error "Multiple includes attempted"
#endif
