#ifndef U_BOOT_UPDATE_COMMON_H

#define CONFIG_ENV_OFFSET		(896 * 1024) // From uboot-imx
#define CONFIG_ENV_SIZE         (16 * 1024)
#define CONFIG_SYS_MMC_ENV_DEV		2	// From uboot-imx

#define CONFIG_HW_WATCHDOG
#define CONFIG_IMX_WATCHDOG
#define CONFIG_WATCHDOG_TIMEOUT_MSECS 15000

#endif
