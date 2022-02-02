#ifndef EDD_H
#define EDD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

#if defined(__i386__) || defined(__x86_64__)
void hd_scan_sysfs_edd(hd_data_t *hd_data);
unsigned edd_disk_signature(hd_t *hd);
void assign_edd_info(hd_data_t *hd_data);
#endif

#ifdef __cplusplus
}
#endif

#endif /* EDD_H */
