

interface DataQueueManage 
{
  command error_t addToQueue(void *, uint8_t);

  event void addLocalDataToQueue();
}
