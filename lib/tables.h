/* -*- c++ -*- */
/*
 * Copyright 2017 Pieter Robyns.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef TABLES_H
#define TABLES_H

namespace gr {
    namespace lora {

        /**
         *  Header whitening sequence
         */
        const uint8_t prng_header[] = {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };

        /**
         *  Whitening sequence
         */

			const uint8_t prng_payload_cr56[] = {

0xff, 0xff, 0x2d, 0xff, 0x78, 0xff, 0x30, 0x2e, 0x0, 0x2e, 0x12, 0x3c, 0x14, 0x28, 0xa, 0x30, 0x36, 0x0, 0x1e, 0x12, 0x2e, 0x14, 0x3c, 0xa, 0x28, 0x36, 0x30, 0x1e, 0x12, 0x2e, 0x6, 0x3c, 0xc, 0x28, 0x3a, 0x30, 0x24, 0x12, 0x18, 0x6, 0x30, 0xc, 0x0, 0x3a, 0x0, 0x24, 0x0, 0x18, 0x0, 0x30, 0x12, 0x0, 0x14, 0x0, 0x18, 0x0, 0x30, 0x0, 0x12, 0x12, 0x6, 0x14, 0x1e, 0x18, 0x3c, 0x30, 0x28, 0x12, 0x30, 0x6, 0x12, 0x1e, 0x14, 0x3c, 0x18, 0x28, 0x22, 0x30, 0x14, 0x12, 0xa, 0x14, 0x36, 0x18, 0x1e, 0x22, 0x3c, 0x14, 0x28, 0xa, 0x30, 0x36, 0x0, 0x1e, 0x0, 0x3c, 0x0, 0x28, 0x12, 0x30, 0x6, 0x0, 0xc, 0x0, 0x28, 0x0, 0x22, 0x12, 0x14, 0x6, 0x18, 0xc, 0x22, 0x28, 0x14, 0x22, 0x18, 0x14, 0x22, 0x18, 0x6, 0x22, 0xc, 0x14, 0x3a, 0x18, 0x36, 0x22, 0x1e, 0x6, 0x3c, 0xc, 0x28, 0x3a, 0x22, 0x36, 0x14, 0x1e, 0x18, 0x3c, 0x30, 0x28, 0x0, 0x22, 0x0, 0x14, 0x12, 0x18, 0x14, 0x30, 0xa, 0x0, 0x24, 0x0, 0xa, 0x12, 0x36, 0x14, 0xc, 0xa, 0x3a, 0x24, 0x36, 0xa, 0xc, 0x36, 0x3a, 0xc, 0x24, 0x3a, 0xa, 0x36, 0x36, 0xc, 0xc, 0x3a, 0x28, 0x24, 0x22, 0xa, 0x14, 0x36, 0xa, 0xc, 0x36, 0x28, 0xc, 0x22, 0x28, 0x14, 0x30, 0xa, 0x0, 0x36, 0x12, 0xc, 0x6, 0x28, 0x1e, 0x30, 0x2e, 0x0, 0x2e, 0x12, 0x3c, 0x6, 0x3a, 0x1e, 0x36, 0x2e, 0xc, 0x2e, 0x3a, 0x3c, 0x36, 0x3a, 0x1e, 0x36, 0x2e, 0xc, 0x3c, 0x3a, 0x3a, 0x36, 0x24, 0x1e, 0xa, 0x2e, 0x36, 0x3c, 0x1e, 0x3a, 0x3c, 0x24, 0x3a, 0xa, 0x24, 0x36, 0x18, 0x1e, 0x30, 0x3c, 0x12, 0x3a, 0x14, 0x24, 0x18, 0x18, 0x30, 0x30, 0x0, 0x12, 0x12, 0x14, 0x6, 0x18, 0xc, 0x30, 0x3a, 0x0, 0x36, 0x12, 0xc, 0x6, 0x28, 0xc, 0x30, 0x3a, 0x12, 0x36, 0x6, 0xc, 0x1e, 0x28, 0x2e, 0x30, 0x3c, 0x12, 0x28, 0x6, 0x22, 0x1e, 0x6, 0x2e, 0x1e, 0x3c, 0x3c, 0x28, 0x28, 0x22, 0x22, 0x6, 0x6, 0x1e, 0xc, 0x3c, 0x28, 0x28, 0x30, 0x22, 0x12, 0x6, 0x14, 0xc, 0xa, 0x28, 0x36, 0x30, 0xc, 0x12, 0x3a, 0x14, 0x24, 0xa, 0x18, 0x36, 0x22, 0xc, 0x14, 0x3a, 0x18, 0x24, 0x30, 0x18, 0x12, 0x22, 0x14, 0x14, 0xa, 0x18, 0x24, 0x30, 0x18, 0x12, 0x22, 0x14, 0x14, 0xa, 0xa, 0x24, 0x24, 0x18, 0xa, 0x22, 0x24, 0x14, 0x18, 0xa, 0x22, 0x24, 0x6, 0xa, 0x1e, 0x24, 0x3c, 0x18, 0x3a, 0x22, 0x36, 0x6, 0x1e, 0x1e, 0x3c, 0x3c, 0x3a, 0x3a, 0x36, 0x36, 0xc, 0x1e, 0x28, 0x3c, 0x22, 0x3a, 0x6, 0x36, 0x1e, 0xc, 0x2e, 0x28, 0x3c, 0x22, 0x3a, 0x6, 0x36, 0x1e, 0x1e, 0x2e, 0x2e, 0x3c, 0x2e, 0x3a, 0x2e, 0x36, 0x3c, 0x1e, 0x3a, 0x2e, 0x24, 0x2e, 0x18, 0x2e, 0x22, 0x3c, 0x6, 0x3a, 0xc, 0x24, 0x28, 0x18, 0x22, 0x22, 0x6, 0x6, 0xc, 0xc, 0x3a, 0x28, 0x24, 0x22, 0xa, 0x6, 0x24, 0xc, 0x18, 0x3a, 0x30, 0x24, 0x12, 0xa, 0x6, 0x24, 0xc, 0x18, 0x28, 0x30, 0x30, 0x12, 0x0, 0x6, 0x0, 0xc, 0x12, 0x28, 0x6, 0x30, 0x1e, 0x0, 0x3c, 0x0, 0x3a, 0x12, 0x24, 0x6, 0xa, 0x1e, 0x24, 0x3c, 0xa, 0x3a, 0x24, 0x24, 0xa, 0xa, 0x36, 0x24, 0x1e, 0xa, 0x2e, 0x24, 0x2e, 0xa, 0x3c, 0x36, 0x28, 0x1e, 0x22, 0x2e, 0x14, 0x2e, 0xa, 0x3c, 0x24, 0x28, 0x18, 0x22, 0x30, 0x14, 0x0, 0xa, 0x12, 0x24, 0x14, 0x18, 0x18, 0x30, 0x22, 0x0, 0x6, 0x12, 0x1e, 0x14, 0x2e, 0x18, 0x2e, 0x22, 0x2e, 0x6, 0x2e, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x24, 0x6	
			};
			
        const uint8_t prng_payload_cr78[] = {
					0xff, 0xff, 0x2d, 0xff, 0x78, 0xff, 0xe1, 0xff,
					0x00, 0xff, 0xd2, 0x2d, 0x55, 0x78, 0x4b, 0xe1,
					0x66, 0x00, 0x1e, 0xd2, 0xff, 0x55, 0x2d, 0x4b, 0x78,
					0x66, 0xe1, 0x1e, 0xd2, 0xff, 0x87, 0x2d, 0xcc, 0x78, 0xaa, 0xe1, 0xb4, 0xd2, 0x99, 0x87, 0xe1, 0xcc, 0x00, 0xaa, 0x00, 0xb4, 0x00, 0x99, 0x00, 0xe1, 0xd2, 0x00, 0x55, 0x00, 0x99, 0x00, 0xe1, 0x00, 0xd2, 0xd2, 0x87, 0x55, 0x1e, 0x99, 0x2d, 0xe1, 0x78, 0xd2, 0xe1, 0x87, 0xd2, 0x1e, 0x55, 0x2d, 0x99, 0x78, 0x33, 0xe1, 0x55, 0xd2, 0x4b, 0x55, 0x66, 0x99, 0x1e, 0x33, 0x2d, 0x55, 0x78, 0x4b, 0xe1, 0x66, 0x00, 0x1e, 0x00, 0x2d, 0x00, 0x78, 0xd2, 0xe1, 0x87, 0x00, 0xcc, 0x00, 0x78, 0x00, 0x33, 0xd2, 0x55, 0x87, 0x99, 0xcc, 0x33, 0x78, 0x55, 0x33, 0x99, 0x55, 0x33, 0x99, 0x87, 0x33, 0xcc, 0x55, 0xaa, 0x99, 0x66, 0x33, 0x1e, 0x87, 0x2d, 0xcc, 0x78, 0xaa, 0x33, 0x66, 0x55, 0x1e, 0x99, 0x2d, 0xe1, 0x78, 0x00, 0x33, 0x00, 0x55, 0xd2, 0x99, 0x55, 0xe1, 0x4b, 0x00, 0xb4, 0x00, 0x4b, 0xd2, 0x66, 0x55, 0xcc, 0x4b, 0xaa, 0xb4, 0x66, 0x4b, 0xcc, 0x66, 0xaa, 0xcc, 0xb4, 0xaa, 0x4b, 0x66, 0x66, 0xcc, 0xcc, 0xaa, 0x78, 0xb4, 0x33, 0x4b, 0x55, 0x66, 0x4b, 0xcc, 0x66, 0x78, 0xcc, 0x33, 0x78, 0x55, 0xe1, 0x4b, 0x00, 0x66, 0xd2, 0xcc, 0x87, 0x78, 0x1e, 0xe1, 0xff, 0x00, 0xff, 0xd2, 0x2d, 0x87, 0xaa, 0x1e, 0x66, 0xff, 0xcc, 0xff, 0xaa, 0x2d, 0x66, 0xaa, 0x1e, 0x66, 0xff, 0xcc, 0x2d, 0xaa, 0xaa, 0x66, 0xb4, 0x1e, 0x4b, 0xff, 0x66, 0x2d, 0x1e, 0xaa, 0x2d, 0xb4, 0xaa, 0x4b, 0xb4, 0x66, 0x99, 0x1e, 0xe1, 0x2d, 0xd2, 0xaa, 0x55, 0xb4, 0x99, 0x99, 0xe1, 0xe1, 0x00, 0xd2, 0xd2, 0x55, 0x87, 0x99, 0xcc, 0xe1, 0xaa, 0x00, 0x66, 0xd2, 0xcc, 0x87, 0x78, 0xcc, 0xe1, 0xaa, 0xd2, 0x66, 0x87, 0xcc, 0x1e, 0x78, 0xff, 0xe1, 0x2d, 0xd2, 0x78, 0x87, 0x33, 0x1e, 0x87, 0xff, 0x1e, 0x2d, 0x2d, 0x78, 0x78, 0x33, 0x33, 0x87, 0x87, 0x1e, 0xcc, 0x2d, 0x78, 0x78, 0xe1, 0x33, 0xd2, 0x87, 0x55, 0xcc, 0x4b, 0x78, 0x66, 0xe1, 0xcc, 0xd2, 0xaa, 0x55, 0xb4, 0x4b, 0x99, 0x66, 0x33, 0xcc, 0x55, 0xaa, 0x99, 0xb4, 0xe1, 0x99, 0xd2, 0x33, 0x55, 0x55, 0x4b, 0x99, 0xb4, 0xe1, 0x99, 0xd2, 0x33, 0x55, 0x55, 0x4b, 0x4b, 0xb4, 0xb4, 0x99, 0x4b, 0x33, 0xb4, 0x55, 0x99, 0x4b, 0x33, 0xb4, 0x87, 0x4b, 0x1e, 0xb4, 0x2d, 0x99, 0xaa, 0x33, 0x66, 0xc7, 0x1e, 0x1e, 0x2d, 0x2d, 0xaa, 0xaa, 0x66, 0x66, 0xcc, 0x1e, 0x78, 0x2d, 0x33, 0xaa, 0x87, 0x66, 0x1e, 0xcc, 0xff, 0x78, 0x2d, 0x33, 0xaa, 0x87, 0x66, 0x1e, 0x1e, 0xff, 0xff, 0x2d, 0xff, 0xaa, 0xff, 0x66, 0x2d, 0x1e, 0xaa, 0xff, 0xb4, 0xff, 0x99, 0xff, 0x33, 0x2d, 0x87, 0xaa, 0xcc, 0xb4, 0x78, 0x99, 0x33, 0x33, 0x87, 0x87, 0xcc, 0xcc, 0xaa, 0x78, 0xb4, 0x33, 0x4b, 0x87, 0xb4, 0xcc, 0x99, 0xaa, 0xe1, 0xb4, 0xd2, 0x4b, 0x87, 0xb4, 0xcc, 0x99, 0x78, 0xe1, 0xe1, 0xd2, 0x00, 0x87, 0x00, 0xcc, 0xd2, 0x78, 0x87, 0xe1, 0x1e, 0x00, 0x2d, 0x00, 0xaa, 0xd2, 0xb4, 0x87, 0x4b, 0x1e, 0xb4, 0x2d, 0x4b, 0xaa, 0xb4, 0xb4, 0x4b, 0x4b, 0x66, 0xb4, 0x1e, 0x4b, 0xff, 0xb4, 0xff, 0x4b, 0x2d, 0x66, 0x78, 0x1e, 0x33, 0xff, 0x55, 0xff, 0x4b, 0x2d, 0xb4, 0x78, 0x99, 0x33, 0xe1, 0x55, 0x00, 0x4b, 0xd2, 0xb4, 0x55, 0x99, 0x99, 0xe1, 0x33, 0x00, 0x87, 0xd2, 0x1e, 0x55, 0xff, 0x99, 0xff, 0x33, 0xff, 0x87, 0xff, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x87, 0xe1, 0xaa, 0xcc,
        };
    }
}

#endif /* TABLES_H */
