#ifndef BIOS_H
#define BIOS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hd.h"

#define BIOS_ROM_START  0xc0000
#define BIOS_ROM_SIZE   0x40000

#define BIOS_RAM_START  0x400
#define BIOS_RAM_SIZE   0x100

void hd_scan_bios(hd_data_t *hd_data);
void get_vbe_info(hd_data_t *hd_data, vbe_info_t *vbe);

#ifdef __cplusplus
}
#endif

#endif /* BIOS_H */
