#include <generated/csr.h>

void usb_init(void) {
    usb_pullup_out_write(1);
}