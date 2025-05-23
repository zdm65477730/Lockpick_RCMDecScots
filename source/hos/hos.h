/*
 * Copyright (c) 2018 naehrwert
 * Copyright (c) 2018-2021 CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _HOS_H_
#define _HOS_H_

#define KEYBLOB_OFFSET 0x180000

#define KB_FIRMWARE_VERSION_100  0
#define KB_FIRMWARE_VERSION_300  1
#define KB_FIRMWARE_VERSION_301  2
#define KB_FIRMWARE_VERSION_400  3
#define KB_FIRMWARE_VERSION_500  4
#define KB_FIRMWARE_VERSION_600  5
#define KB_FIRMWARE_VERSION_620  6
#define KB_FIRMWARE_VERSION_700  7
#define KB_FIRMWARE_VERSION_810  8
#define KB_FIRMWARE_VERSION_900  9
#define KB_FIRMWARE_VERSION_910  10
#define KB_FIRMWARE_VERSION_1210 11
#define KB_FIRMWARE_VERSION_1300 12
#define KB_FIRMWARE_VERSION_1400 13
#define KB_FIRMWARE_VERSION_1500 14
#define KB_FIRMWARE_VERSION_1600 15
#define KB_FIRMWARE_VERSION_1700 16
#define KB_FIRMWARE_VERSION_1800 17
#define KB_FIRMWARE_VERSION_1900 18
#define KB_FIRMWARE_VERSION_2000 19 /* Support to FW 20.0.0 */
#define KB_FIRMWARE_VERSION_MAX  KB_FIRMWARE_VERSION_2000 //!TODO: Update on mkey changes.

#endif
