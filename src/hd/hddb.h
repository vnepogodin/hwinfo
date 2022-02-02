#ifndef HDDB_H
#define HDDB_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

void hddb_init(hd_data_t *hd_data);

unsigned device_class(hd_data_t *hd_data, unsigned vendor, unsigned device);
unsigned sub_device_class(hd_data_t *hd_data, unsigned vendor, unsigned device, unsigned sub_vendor, unsigned sub_device);

char *hid_tag_name(int tag);
char *hid_tag_name2(int tag);

#ifdef __cplusplus
}
#endif

#endif /* HDDB_H */
