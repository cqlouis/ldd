ifneq ($(KERNELRELEASE),)
	obj-m:=02_module_param.o
else
	KERNELDIR:=/lib/modules/$(shell uname -r)/build

PWD:=$(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	rm -rf *.o *.mod.c *.mod.o *.ko *order *vers
endif
