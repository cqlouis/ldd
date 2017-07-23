#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

MODULE_DESCRIPTION("An Simplest Example of Modularity Programming");
MODULE_AUTHOR("RUI LIU");
MODULE_LICENSE("Dual BSD/GPL");


static unsigned int int_var = 0;
module_param(int_var, uint, 0644 );

static int hello_init(void)
{
	printk(KERN_INFO "Hello Modularity Programming, I'm coming!\n");
	printk(KERN_INFO "the parameter is %d\n", int_var);

	


	return 0;
}


static void  hello_exit(void)
{
	printk(KERN_INFO "See you , I'll be back soon\n");
}

module_init(hello_init);
module_exit(hello_exit);
