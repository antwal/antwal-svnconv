
typedef struct DissmnCtrlMsg {
  uint16_t node_id;
  uint8_t type;
  uint16_t bitmap;
  uint16_t period[11];
} __attribute__ ((packed)) ctrl_data_t;

/*
typedef struct ctrl_data {
  uint8_t period[3];  	
} ctrl_data_t;
*/
