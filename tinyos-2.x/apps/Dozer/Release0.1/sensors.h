/*
 * Name           : sensors.h
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2007/12/19, 2009/07/31
 *
 * Description    :
 * -----------
 * Header defining application specific 
 * sensor periodicities & control msg types.
 *
 *
 */

// Sensor Default Periodicities
enum {
BATTERY_SAMPLING_TIME  = 0U,//36123U(A0), 36213U(A1), 36813U(A2),
TEMP_SAMPLING_TIME     = 1000U,//36517U, 36417U, 36317U,
HUMID_SAMPLING_TIME    = 1000U,//36312U, 36612U, 36512U,
RAIN_SAMPLING_TIME     = 0,//36060U,//36060U(A0), 0, 0,
SMOIST_SAMPLING_TIME   = 0,
STEMP_SAMPLING_TIME    = 0,
WSPEED_SAMPLING_TIME   = 0,//9051U,//9051U(A0), 0, 0,
WDIR_SAMPLING_TIME     = 0U,//9091U,//9091U(A0), 0, 0, 
LWET_SAMPLING_TIME     = 0U,//0(A0), 1297(A1), 1287(A2),  
SOLAR_SAMPLING_TIME    = 0,//36887U,//36887U(A0), 0, 0, 
};


// Dissemination ContolMsg Types
enum {
  DEFAULT_SAMPLING_TIME = 'd',
  CHANGE_SAMPLING_TIME = 'c',  
};

