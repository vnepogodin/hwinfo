#ifndef HAL_H
#define HAL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

void hd_scan_hal(hd_data_t *hd_data);
void hd_scan_hal_basic(hd_data_t *hd_data);
void hd_scan_hal_assign_udi(hd_data_t *hd_data);

#ifdef __cplusplus
}
#endif

#endif /* HAL_H */
