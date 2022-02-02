#ifndef BLOCK_H
#define BLOCK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

void hd_scan_sysfs_block(hd_data_t *hd_data);
void hd_scan_sysfs_scsi(hd_data_t *hd_data);

#ifdef __cplusplus
}
#endif

#endif /* BLOCK_H */
