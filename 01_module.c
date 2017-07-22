#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_DESCRIPTION("An Example of Modularity Programming");
MODULE_AUTHOR("RUI LIU");
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	printk(KERN_INFO "Hello Modularity Programming, I'm coming!\n");
	return 0;
}


static void  hello_exit(void)
{
	printk(KERN_INFO "See you , I'll be back soon\n");
}

module_init(hello_init);
module_exit(hello_exit);
