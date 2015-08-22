
SUBDIRS =  misc-progs misc-modules \
           skull scull scullc sculld scullp scullv sbull snull\
	   short shortprint pci simple usb lddbus hello_world

all: subdirs

subdirs:
	for n in $(SUBDIRS); do $(MAKE) -C $$n || exit 1; done

clean:
	for n in $(SUBDIRS); do $(MAKE) -C $$n clean; done
