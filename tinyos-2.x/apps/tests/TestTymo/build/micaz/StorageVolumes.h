#ifndef STORAGE_VOLUMES_H
#define STORAGE_VOLUMES_H

enum {
  VOLUME_DYMODATA, 
};

#endif
#if defined(VS)
VS(VOLUME_DYMODATA, 512)
#undef VS
#endif
#if defined(VB)
VB(VOLUME_DYMODATA, 0)
#undef VB
#endif
