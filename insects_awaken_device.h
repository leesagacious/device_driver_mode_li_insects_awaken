#include <linux/kobject.h>


struct base_device {
	struct kobject base_kobj;
	const char *base_device_name;
};

int base_device_add(struct base_device *);
void base_device_remove(struct base_device *);
int base_register(struct base_device *);
void base_unregister(struct base_device *);
