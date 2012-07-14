#include <stdint.h>



typedef struct{
	uint8_t status;
	uint8_t type;
	uint16_t precision;
    uint32_t est_error;
    uint32_t est_driftrate;
    uint32_t ref_clk_ident;
    uint32_t ref_timestamp_i;
    uint32_t ref_timestamp_f;
    uint32_t orig_timestamp_i;
    uint32_t orig_timestamp_f;
    uint32_t rx_timestamp_i;
    uint32_t rx_timestamp_f;
    uint8_t tx_timestamp_i[4];
    uint32_t tx_timestamp_f;
} ntpMsg ;

uint8_t gmtim(const uint32_t time);
void NtpDCall(ntpMsg *msg);
