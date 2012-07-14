/*
 * Name           : sensorboardApp.h
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


// Maximum sensors 
#define MAX_SENSORS 11 

// Sensed Data Msg
typedef struct SensedData{
  uint16_t  node_id;
  uint8_t  sensor_id;
  uint8_t  crop_id[1];
  uint16_t plot_id;
  uint16_t value;
} __attribute__ ((packed)) SensedData;

// One Shot Data Msg
typedef struct OneShotData{
  uint16_t  node_id;
  uint8_t  crop_id[1];
  uint16_t plot_id;
  uint16_t value[MAX_SENSORS];
} __attribute__ ((packed)) OneShotData;

//Dissmn Control Msg
typedef struct DissmnCtrlMsg {
  uint8_t type;
  uint16_t bitmap;
  uint16_t period[MAX_SENSORS];
} __attribute__ ((packed)) DissmnCtrlMsg;


enum {
    AM_UONESHOT_MSG   = 50,
    AM_UAGRI_MSG      = 51         // multihop 
};

