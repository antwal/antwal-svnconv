

interface TDMASchedule
{
  command error_t setPPB(uint8_t *Index, dozer_parent_t *ppb, uint8_t count);

  command error_t getPPB(dozer_parent_t **gparent);

  command error_t startTimers();

  command error_t stopTimers();

  command error_t clearTableEntry(uint16_t node_id, uint8_t parent);

  command error_t setParentTimeStamp(uint16_t node_id, dozer_beacon_t *bmsg, uint32_t timestamp);

  command void setBeaconTimeStamp(uint32_t timestamp);

  async command void setParentTDMASlot(uint8_t tslot);

  async command uint8_t allocChildTimeSlot(uint16_t node_id, dozer_beacon_t *local);

  event void radioWakeup(uint8_t type, uint16_t node_id);
}
