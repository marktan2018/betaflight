/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software: you can redistribute 
 * this software and/or modify this software under the terms of the 
 * GNU General Public License as published by the Free Software 
 * Foundation, either version 3 of the License, or (at your option) 
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  
 * 
 * If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "platform.h"

#include "drivers/bus_i2c.h"
#include "drivers/io_types.h"
#include "drivers/rcc_types.h"

#include "pg/pg.h"

typedef struct i2cConfig_s {
    ioTag_t ioTagScl[I2CDEV_COUNT];
    ioTag_t ioTagSda[I2CDEV_COUNT];
    bool overClock[I2CDEV_COUNT];
    bool pullUp[I2CDEV_COUNT];
} i2cConfig_t;

PG_DECLARE(i2cConfig_t, i2cConfig);
