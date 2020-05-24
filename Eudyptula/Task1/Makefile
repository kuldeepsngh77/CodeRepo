obj-m += hello-1.o
obj-m += hello-2.o

KIDR = /lib/modules/$(shell uname -r)/build
all:
	make -C $(KIDR) M=$(PWD) modules

clean:
	@rm -rf *.o *.ko *.mod* *.symvers *.order
