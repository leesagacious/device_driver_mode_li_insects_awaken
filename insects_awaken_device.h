#include <linux/kobject.h>


struct base_device {
	struct kobject base_kobj;
	const char *base_device_name;
};
