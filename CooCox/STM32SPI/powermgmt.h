unsigned char spi_buffer[50];

#define spi_read()		bufferGetFromFront(&spi_buff)

typedef struct power_status{
uint16_t bat1;
uint16_t bat2;
uint32_t sol;
uint8_t charge_status;
uint8_t supply;
}__attribute__ ((packed)) power_status;

// size of packet after parsing
#define PACKET_SIZE  (sizeof(power_status) + 2 + 1)

/*
 * Synchronisation BITS
 */
#define START_BYTE 0X7E
#define STOP_BYTE  0X7E
#define ESC_CHAR  0X7D


void ParsePkt(uint8_t *Packet);
uint8_t  checksum(char *var);
