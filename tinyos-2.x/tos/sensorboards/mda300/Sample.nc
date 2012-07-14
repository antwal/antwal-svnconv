
interface Sample {
    command int8_t getSample(uint8_t channel,uint8_t channelType,uint32_t interval,uint8_t param); 
    command error_t set_digital_output(uint8_t channel,uint8_t state);
    event error_t readDone(uint8_t channel,uint8_t channelType,uint16_t data); 
    command error_t reTask(int8_t record,uint32_t interval);
    command error_t readSample(int8_t record);
    command error_t stop(int8_t record);
    command error_t start();
}

