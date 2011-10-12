

interface TDMASchedule
{
  command error_t clearTableEntry(uint16_t node_id, uint8_t parent);

  command error_t setParentTimeStamp(uint16_t node_id, bool parent, uint16_t seed, uint32_t timestamp);

  command void setBeaconTimeStamp(uint32_t timestamp);

  async command void setParentTDMASlot(uint8_t tslot);

  async command uint8_t allocChildTimeSlot(uint16_t node_id);

  event void radioWakeup(uint8_t type, uint16_t node_id);
}
