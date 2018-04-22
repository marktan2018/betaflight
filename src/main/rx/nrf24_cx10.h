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

#include <stdbool.h>
#include <stdint.h>

struct rxConfig_s;
struct rxRuntimeConfig_s;
bool cx10Nrf24Init(const struct rxConfig_s *rxConfig, struct rxRuntimeConfig_s *rxRuntimeConfig);
void cx10Nrf24SetRcDataFromPayload(uint16_t *rcData, const uint8_t *payload);
rx_spi_received_e cx10Nrf24DataReceived(uint8_t *payload);
