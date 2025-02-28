#ifndef ISDN_H
#define ISDN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

void hd_scan_isdn(hd_data_t *hd_data);
void hd_scan_dsl(hd_data_t *hd_data);
cdb_isdn_card *get_isdn_info(hd_t *hd);
cdb_isdn_card *get_dsl_info(hd_t *hd);

#ifdef __cplusplus
}
#endif

#endif /* ISDN_H */
