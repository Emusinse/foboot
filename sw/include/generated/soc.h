//--------------------------------------------------------------------------------
// Auto-generated by Migen (d11565a) & LiteX (e9f0ff68) on 2020-03-11 21:28:54
//--------------------------------------------------------------------------------
#ifndef __GENERATED_SOC_H
#define __GENERATED_SOC_H
#define CONFIG_CLOCK_FREQUENCY 12000000
static inline int config_clock_frequency_read(void) {
	return 12000000;
}
#define CONFIG_CPU_RESET_ADDR 0
static inline int config_cpu_reset_addr_read(void) {
	return 0;
}
#define CONFIG_CPU_TYPE_VEXRISCV
#define CONFIG_CPU_VARIANT_MINIMAL
#define CONFIG_CSR_DATA_WIDTH 32
static inline int config_csr_data_width_read(void) {
	return 32;
}
#define CONFIG_CSR_ALIGNMENT 32
static inline int config_csr_alignment_read(void) {
	return 32;
}
#define TIMER0_INTERRUPT 2
static inline int timer0_interrupt_read(void) {
	return 2;
}
#define USB_INTERRUPT 3
static inline int usb_interrupt_read(void) {
	return 3;
}
#define CONFIG_BITSTREAM_SYNC_HEADER1 2123999870
static inline int config_bitstream_sync_header1_read(void) {
	return 2123999870;
}
#define CONFIG_BITSTREAM_SYNC_HEADER2 2125109630
static inline int config_bitstream_sync_header2_read(void) {
	return 2125109630;
}
#define CONFIG_FOMU_REV_PVT

#endif
