#ifndef SENSIRIONSHT15_H
#define SENSIRIONSHT15_H

/*
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Gilman Tolle <gtolle@archrock.com>
 */

enum {
  SHT15_TEMPERATURE_BITS = 14,
  SHT15_HUMIDITY_BITS = 12,
};

enum {
  SHT15_STATUS_LOW_RES_BIT = 1 << 0,
  SHT15_STATUS_NO_RELOAD_BIT = 1 << 1,
  SHT15_STATUS_HEATER_ON_BIT = 1 << 2,
  SHT15_STATUS_LOW_BATTERY_BIT = 1 << 6,
} sht_bits_t;

#endif
