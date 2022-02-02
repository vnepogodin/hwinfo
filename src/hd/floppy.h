#ifndef FLOPPY_H
#define FLOPPY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

void hd_scan_floppy(hd_data_t *hd_data);

#ifdef __cplusplus
}
#endif

#endif /* FLOPPY_H */
