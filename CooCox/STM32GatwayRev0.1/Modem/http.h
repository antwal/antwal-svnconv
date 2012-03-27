/*
 * Decleration of the Public functions
 */
uint8_t uploadFile(mdmIface *mdm, const char *file, server *tcp);
httpStatus mdmHttpRes(mdmIface *mdm, uint32_t* ContLen);
/*
 * Decleration of the Private functions
 */
mdmStatus login(mdmIface *mdm);
mdmStatus sendHeader(mdmIface *mdm, uint32_t file_size, char *cookie );
mdmStatus sendData(mdmIface *mdm ,const char *file);
uint32_t getFileSize(const char *file);

