/*
 *  config.h -  Fan control daemon for MacBook
 *
 *  Copyright (C) 2010  Mikael Strom <mikael@sesamiq.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#ifndef CONFIG_H_
#define CONFIG_H_

extern float temp_avg_floor;
extern float temp_avg_ceiling;

extern float temp_TC0D_floor;
extern float temp_TC0D_ceiling;

extern float temp_TN1D_floor;
extern float temp_TN1D_ceiling;

extern float fan_min;
extern float fan_max;

extern int log_level;

void read_cfg(char* name);

#define MAX_EXCLUDE		20
extern int exclude[MAX_EXCLUDE];	// array of sensors to exclude

#define max(a,b)	(a > b ? a : b)
#define min(a,b)	(a < b ? a : b)

#endif /* CONFIG_H_ */
