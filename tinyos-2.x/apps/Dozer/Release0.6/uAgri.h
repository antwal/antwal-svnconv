/*
 * Name           : uAgri.h
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2007/12/19, 2009/07/31
 *
 * 
 * Description    :
 * -----------
 * Header defining the packet structures for
 * Sensed Data, OneShot Data, Dissmn Control Msgs 
 * VRef Hardware Definitions
 *
 */

/* ----------------------------------------------
 * Specify Crop Id & Plot Id, BaseStation Address 
 * ----------------------------------------------
 */

#define CROP 'C'        
#define CROP_ID '1'
#define PLOT_ID 2 
#define BASE_STATION_ADDR 0 // Value can range from 0-100. Since sensing node_ids start from 101(Standard)
  // Maximum sensors 
#define MAX_SENSORS 11


// Sensor Default Periodicities
enum {
  BATTERY_SAMPLING_TIME  = 1210U,//36123U(A0), 36213U(A1), 36813U(A2),
  TEMP_SAMPLING_TIME     = 1200U,//36517U, 36417U, 36317U,
  HUMID_SAMPLING_TIME    = 1200U,//36312U, 36612U, 36512U,
  RAIN_SAMPLING_TIME     = 0,//36060U,//36060U(A0), 0, 0,
  SMOIST_SAMPLING_TIME   = 0,
  STEMP_SAMPLING_TIME    = 0,
  WSPEED_SAMPLING_TIME   = 0,//9051U,//9051U(A0), 0, 0,
  WDIR_SAMPLING_TIME     = 0U,//9091U,//9091U(A0), 0, 0, 
  LWET_SAMPLING_TIME     = 0U,//0(A0), 1297(A1), 1287(A2),  
  SOLAR_SAMPLING_TIME    = 0,//36887U,//36887U(A0), 0, 0, 
};


// Sensed Data Msg
typedef nx_struct SensedData {
  nxle_uint8_t  sensor_id;
  nxle_uint8_t  crop_id;
  nxle_uint16_t plot_id;
  nxle_uint16_t value;
} __attribute__ ((packed)) SensedData_t;


// One Shot Data Msg
typedef nx_struct OneShotData{
  nxle_uint8_t  type;
  nxle_uint8_t  crop_id;
  nxle_uint16_t plot_id;
  nxle_uint16_t value[MAX_SENSORS];
} OneShotData_t;
//} __attribute__ ((packed)) OneShotData;


//Dissmn Control Msg
typedef nx_struct DissmnCtrlMsg {
  nxle_uint8_t type;
  nxle_uint16_t bitmap;
  nxle_uint16_t period[MAX_SENSORS];
} DissmnCtrlMsg_t;
//} __attribute__ ((packed)) DissmnCtrlMsg;


// Dissemination ContolMsg Types
enum {
  DEFAULT_SAMPLING_TIME = 'd',
  CHANGE_SAMPLING_TIME = 'c',
};

