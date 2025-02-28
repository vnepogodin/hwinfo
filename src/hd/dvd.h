#ifndef DVD_H
#define DVD_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * taken from HAL 0.5.14
 * http://www.freedesktop.org/Software/hal
 */

#define DRIVE_CDROM_CAPS_DVDRW         1
#define DRIVE_CDROM_CAPS_DVDRDL        2
#define DRIVE_CDROM_CAPS_DVDPLUSR      4
#define DRIVE_CDROM_CAPS_DVDPLUSRW     8
#define DRIVE_CDROM_CAPS_DVDPLUSRWDL  16
#define DRIVE_CDROM_CAPS_DVDPLUSRDL   32
#define DRIVE_CDROM_CAPS_BDROM        64
#define DRIVE_CDROM_CAPS_BDR         128
#define DRIVE_CDROM_CAPS_BDRE        256
#define DRIVE_CDROM_CAPS_HDDVDROM    512
#define DRIVE_CDROM_CAPS_HDDVDR     1024
#define DRIVE_CDROM_CAPS_HDDVDRW    2048

int get_dvd_profile(int fd);

#ifdef __cplusplus
}
#endif

#endif /* DVD_H */
