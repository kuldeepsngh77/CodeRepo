#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
	printk(KERN_DEBUG "Hello world!\n");
	return 0;
}

void cleanup_module(void) {
	printk(KERN_DEBUG "Bye, Hello world done!!\n");
}

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Kuldeep Singh");
MODULE_DESCRIPTION("A simple linux kernel module");
MODULE_VERSION("0.01");
