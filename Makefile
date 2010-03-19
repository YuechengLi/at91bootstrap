#--------------------------------------------------------------
# Just run 'make menuconfig', configure stuff, then run 'make'.
# You shouldn't need to mess with anything beyond this point...
#--------------------------------------------------------------

TOPDIR:=./
CONFIG_CONFIG_IN=Config.in
CONFIG_DEFCONFIG=.defconfig
CONFIG=config
CONFIG_SHELL=/bin/bash
BINDIR:=$(TOPDIR)binaries/

TOOLCHAIN_DIR=atmel-2009-08-rc2

DATE:=$(shell date +%Y%m%d)

VERSION:=2.13

 
noconfig_targets:= menuconfig defconfig $(CONFIG) oldconfig

# Check first if we want to configure at91bootstrap
#
ifeq ($(filter $(noconfig_targets),$(MAKECMDGOALS)),)
-include	.config
endif

include		host-utilities/host.mk

ifeq ($(HAVE_DOT_CONFIG),)

all: menuconfig

# configuration
# ---------------------------------------------------------------------------

HOSTCFLAGS=$(CFLAGS_FOR_BUILD)
export HOSTCFLAGS

$(CONFIG)/conf:
	@mkdir -p $(CONFIG)/at91bootstrap-config
	$(MAKE) CC="$(HOSTCC)" -C $(CONFIG) conf
	-@if [ ! -f .config ]; then \
		cp $(CONFIG_DEFCONFIG) .config; \
	fi

$(CONFIG)/mconf:
	@mkdir -p $(CONFIG)/at91bootstrap-config
	$(MAKE) CC="$(HOSTCC)" -C $(CONFIG) conf mconf
	-@if [ ! -f .config ]; then \
		cp $(CONFIG_DEFCONFIG) .config; \
	fi

menuconfig: $(CONFIG)/mconf
	@mkdir -p $(CONFIG)/at91bootstrap-config
	@if ! KCONFIG_AUTOCONFIG=$(CONFIG)/at91bootstrap-config/auto.conf \
		KCONFIG_AUTOHEADER=$(CONFIG)/at91bootstrap-config/autoconf.h \
		$(CONFIG)/mconf $(CONFIG_CONFIG_IN); then \
		test -f .config.cmd || rm -f .config; \
	fi

$(CONFIG): $(CONFIG)/conf
	@mkdir -p $(CONFIG)/at91bootstrap-config
	@KCONFIG_AUTOCONFIG=$(CONFIG)/at91bootstrap-config/auto.conf \
		KCONFIG_AUTOHEADER=$(CONFIG)/at91bootstrap-config/autoconf.h \
		$(CONFIG)/conf $(CONFIG_CONFIG_IN)

oldconfig: $(CONFIG)/conf
	@mkdir -p $(CONFIG)/at91bootstrap-config
	@KCONFIG_AUTOCONFIG=$(CONFIG)/at91bootstrap-config/auto.conf \
		KCONFIG_AUTOHEADER=$(CONFIG)/at91bootstrap-config/autoconf.h \
		$(CONFIG)/conf -o $(CONFIG_CONFIG_IN)

defconfig: $(CONFIG)/conf
	@mkdir -p $(CONFIG)/at91bootstrap-config
	@KCONFIG_AUTOCONFIG=$(CONFIG)/at91bootstrap-config/auto.conf \
		KCONFIG_AUTOHEADER=$(CONFIG)/at91bootstrap-config/autoconf.h \
		$(CONFIG)/conf -d $(CONFIG_CONFIG_IN)

else
AS=$(CROSS_COMPILE)gcc
CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
NM= $(CROSS_COMPILE)nm
SIZE=$(CROSS_COMPILE)size
OBJCOPY=$(CROSS_COMPILE)objcopy
OBJDUMP=$(CROSS_COMPILE)objdump
#CONFIG_NO_DWARF_CFI_ASM=y
#CONFIG_THUMB=

ifeq ($(CONFIG_NO_DWARF_CFI_ASM),)
NO_DWARF_CFI_ASM=
else
NO_DWARF_CFI_ASM=-fno-dwarf2-cfi-asm
endif




PROJECT:=$(strip $(subst ",,$(CONFIG_PROJECT)))
#"))
IMG_ADDRESS=$(strip $(subst ",,$(CONFIG_IMG_ADDRESS)))
#"))
IMG_SIZE=$(strip $(subst ",,$(CONFIG_IMG_SIZE)))
#"))
JUMP_ADDR=$(strip $(subst ",,$(CONFIG_JUMP_ADDR)))
#"))
BOOTSTRAP_MAXSIZE=$(strip $(subst ",,$(CONFIG_BOOTSTRAP_MAXSIZE)))
#"))

MEMORY:=$(strip $(subst ",,$(CONFIG_MEMORY)))
#"))
CARD_SUFFIX=$(strip $(subst ",,$(CONFIG_CARD_SUFFIX)))
#"))

# Board definitions

BOARDNAME=$(strip $(subst ",,$(CONFIG_BOARDNAME)))
#"))

# CHIP is UNUSED
CHIP:=$(strip $(subst ",,$(CONFIG_CHIP)))
#"))
BOARD:=$(strip $(subst ",,$(CONFIG_BOARD)))
#"))
MACH_TYPE:=$(strip $(subst ",,$(CONFIG_MACH_TYPE)))
#"))
LINK_ADDR:=$(strip $(subst ",,$(CONFIG_LINK_ADDR)))
#"))
TOP_OF_MEMORY:=$(strip $(subst ",,$(CONFIG_TOP_OF_MEMORY)))
#"))

# CRYSTAL is UNUSED
CRYSTAL:=$(strip $(subst ",,$(CONFIG_CRYSTAL)))
#"))

# driver definitions

SPI_CLK:=$(strip $(subst ",,$(CONFIG_SPI_CLK)))
#"))
SPI_BOOT:=$(strip $(subst ",,$(CONFIG_SPI_BOOT)))
#"))
SPI_MODE:=SPI_MODE_$(strip $(subst ",,$(CONFIG_SPI_MODE)))
#"))

ifeq ($(REVISION),)
REV:=
else
REV:=-$(strip $(subst ",,$(REVISION)))
endif

obj=build/$(BOARDNAME)/

BOOT_NAME=$(BOARDNAME)-$(PROJECT)$(CARD_SUFFIX)boot-$(VERSION)$(REV)

AT91BOOTSTRAP:=$(BINDIR)$(BOOT_NAME).bin

ifeq ($(DESTDIR),)
DESTDIR=install
endif

ifeq ($(IMAGE),)
IMAGE=$(BOOT_NAME).bin
endif

ifeq ($(SYMLINK),)
SYMLINK=at91bootstrap.bin
endif


EXTRA_INSTALL=
ifeq ($(CONFIG_AT91SAM9G45EKES),y)
EXTRA_INSTALL+=files/AT91SAM9G45_RomCode_Replacement_13.bin.zip
EXTRA_INSTALL+=files/README.TXT
endif
EXTRA_INSTALL+=scripts/fixboot.py
EXTRA_INSTALL+=files/Makefile.jffs2
EXTRA_INSTALL+=files/NAND-empty-1MB.jffs2.bz2
EXTRA_INSTALL+=files/SD-card-tools.tar.bz2

ifeq ($(CONFIG_RAW_AT91),y)
RAW_AT91=$(BINDIR)raw-at91
EXTRA_INSTALL+=$(BINDIR)raw-at91
endif
ifeq ($(CONFIG_SX_AT91),y)
SX_AT91=$(BINDIR)sx-at91
EXTRA_INSTALL+=$(BINDIR)sx-at91
endif




COBJS-y:= main.o $(BOARD).o
SOBJS-y:= crt0_gnu.o
DIRS:=


include 	lib/libc.mk
include		driver/driver.mk

# $(SOBJS-y:.o=.S)

SRCS	:= $(COBJS-y:.o=.c)

OBJS	:= $(addprefix $(obj),$(SOBJS-y) $(COBJS-y)) 
##OBJS	:= $(addprefix $(obj),$(SOBJS-y) $(COBJS-y) $(LIBC_SOBJS-y) $(LIBC_COBJS-y) $(DRIVER_SOBJS-y) $(DRIVER_COBJS-y))
#OBJS	:= $(addprefix $(obj), $(COBJS-y))

INCL=board/$(BOARD)

#AT91_CUSTOM_FLAGS:=-mcpu=arm9
#AT91_CUSTOM_FLAGS:=-mcpu=arm926ej-s
#GC_SECTIONS=--gc-sections

CPPFLAGS=-g -Os -Wall 	-I$(INCL) -Iinclude	\
	-DAT91BOOTSTRAP_VERSION=\"$(VERSION)\"	\
	$(NO_DWARF_CFI_ASM) \
	$(AT91_CUSTOM_FLAGS) 

ASFLAGS=-g -Os -Wall -I$(INCL) -Iinclude  		\
	$(AT91_CUSTOM_FLAGS)

include		toplevel_cpp.mk
include		board/board_cpp.mk
include		driver/driver_cpp.mk

# Linker flags.
#  -Wl,...:     tell GCC to pass this to linker.
#    -Map:      create map file
#    --cref:    add cross reference to map file
#  -lc 	   : 	tells the linker to tie in newlib
#  -lgcc   : 	tells the linker to tie in newlib
LDFLAGS+=-nostartfiles -Map=result/$(BOOT_NAME).map --cref
#LDFLAGS+=-lc -lgcc
LDFLAGS+=-T elf32-littlearm.lds $(GC_SECTIONS) -Ttext $(LINK_ADDR)


ifeq ($(CC),gcc) 
TARGETS=no-cross-compiler
else
TARGETS=$(obj) $(AT91BOOTSTRAP) host-utilities .config filesize
endif



all: 	$(TARGETS)

$(AT91BOOTSTRAP).fixboot:	$(AT91BOOTSTRAP)
	./scripts/fixboot.py $(AT91BOOTSTRAP)

boot:	$(AT91BOOTSTRAP).fixboot

install:	bootstrap	utilities

bootstrap:	$(AT91BOOTSTRAP).fixboot
	-install -d $(DESTDIR)
	install $(AT91BOOTSTRAP).fixboot $(DESTDIR)/$(IMAGE)
	-rm -f $(DESTDIR)/$(SYMLINK)
	(cd ${DESTDIR} ; \
	 ln -sf ${IMAGE} ${SYMLINK} \
	)

utilities:
	-install -d $(DESTDIR)/Utilities
	(for f in $(EXTRA_INSTALL) ; do \
		install $$f $(DESTDIR)/Utilities/`basename $$f`; \
	done)


host-utilities:	$(RAW_AT91) $(SX_AT91) 

$(BINDIR):
	mkdir -p $(BINDIR)

$(BINDIR)raw-at91:	$(BINDIR)
	$(HOSTCC) -o $(BINDIR)raw-at91 host-utilities/raw-at91.c

$(BINDIR)sx-at91:	$(BINDIR)
	$(HOSTCC) -o $(BINDIR)sx-at91 host-utilities/sx-at91.c

$(obj):
	mkdir -p $(obj)

test:
	@echo obj=$(obj)
	@echo OBJS=$(OBJS)
	@echo SRCS=$(SRCS)
	@echo "$(obj)crt0_gnu.o"

rebuild: clean all

.SUFFIXES:	.c

filesize:
	@( fsize=`stat -c%s $(AT91BOOTSTRAP)`; \
	  echo "Size of $(AT91BOOTSTRAP) is $$fsize bytes"; \
	  if [ "$$fsize" -gt "$(BOOTSTRAP_MAXSIZE)" ] ; then \
		echo "Will not fit into SRAM area"; \
		exit 2;\
	  fi )

$(AT91BOOTSTRAP): $(BINDIR) $(obj)$(BOOT_NAME).elf
	$(OBJCOPY) --strip-debug --strip-unneeded $(obj)$(BOOT_NAME).elf -O binary $(AT91BOOTSTRAP)

$(obj)$(BOOT_NAME).elf: $(OBJS)
	mkdir -p result
	$(LD) $(LDFLAGS) -n -o $(obj)$(BOOT_NAME).elf $(OBJS)

$(obj)crt0_gnu.o:  crt0_gnu.S .config
	$(AS)  $(ASFLAGS)  -c -o $(obj)crt0_gnu.o crt0_gnu.S 

$(obj)main.o: main.c .config
	$(CC) $(CPPFLAGS) -c -o $(obj)main.o main.c

$(obj)$(BOARD).o: $(obj) board/$(BOARD)/$(BOARD).c .config
	$(CC) $(CPPFLAGS) -c -o $(obj)$(BOARD).o board/$(BOARD)/$(BOARD).c


$(obj)string.o:	lib/string.c
	$(CC)	$(CPPFLAGS) -c -o $*.o	lib/string.c

$(obj)div0.o:	lib/div0.c
	$(CC)	$(CPPFLAGS) -c -o $*.o	lib/div0.c

$(obj)udiv.o:	lib/udiv.c
	$(CC)	$(CPPFLAGS) -c -o $*.o	lib/udiv.c

$(obj)_udivsi3.o: lib/_udivsi3.S
	$(AS)	$(ASFLAGS)  -c -o $*.o	lib/_udivsi3.S

$(obj)_umodsi3.o: $(obj) lib/_umodsi3.S
	$(AS)	$(ASFLAGS)  -c -o $*.o	lib/_umodsi3.S



$(obj)debug.o:	$(DRIVERS_SRC)/debug.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)debug.o $(DRIVERS_SRC)/debug.c

$(obj)gpio.o:	$(DRIVERS_SRC)/gpio.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)gpio.o $(DRIVERS_SRC)/gpio.c

$(obj)pmc.o:	$(DRIVERS_SRC)/pmc.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)pmc.o $(DRIVERS_SRC)/pmc.c

$(obj)sdramc.o:	$(DRIVERS_SRC)/sdramc.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)sdramc.o $(DRIVERS_SRC)/sdramc.c

$(obj)sddrc.o:	$(DRIVERS_SRC)/sddrc.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)sddrc.o $(DRIVERS_SRC)/sddrc.c

$(obj)ddramc.o:	$(DRIVERS_SRC)/ddramc.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)ddramc.o $(DRIVERS_SRC)/ddramc.c

$(obj)dataflash.o: $(DRIVERS_SRC)/dataflash.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)dataflash.o $(DRIVERS_SRC)/dataflash.c

$(obj)flash.o:	$(DRIVERS_SRC)/flash.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)flash.o $(DRIVERS_SRC)/flash.c

$(obj)nandflash.o: $(DRIVERS_SRC)/nandflash.c .config
	$(CC)	$(CPPFLAGS) -c -o $(obj)nandflash.o $(DRIVERS_SRC)/nandflash.c

../$(TOOLCHAIN_DIR):
	(cd .. ; git clone git://git.busybox.net/~ulf/git/$(TOOLCHAIN_DIR))

../$(TOOLCHAIN_DIR)/.config:	../$(TOOLCHAIN_DIR)
	make -C ../$(TOOLCHAIN_DIR) at91sam9260dfc_config

toolchain:	../$(TOOLCHAIN_DIR)/.config
	make -C ../$(TOOLCHAIN_DIR)

endif

%_defconfig:
	echo $(shell find ./board/ -name $@)
	cp $(shell find ./board/ -name $@) .config
	@$(MAKE) oldconfig

update:
	cp .config board/$(BOARD)/$(BOARDNAME)_defconfig

no-cross-compiler:
	@echo
	@echo
	@echo
	@echo "	You should consider using a cross compiler for ARM !"
	@echo "	I.E: CROSS_COMPILE should contains something useful."
	@echo

debug:
	@echo CONFIG=$(CONFIG)
	@echo AS=$(AS)
	@echo CROSS_COMPILE=$(CROSS_COMPILE)

distrib: config-clean
	find . -type f \( -name .depend \
		-o -name '*.srec' \
		-o -name '*.elf' \
		-o -name '*.map' \
		-o -name '*.o' \
		-o -name '*~' \) \
		-print0 \
		| xargs -0 rm -f
	rm -fr result
	rm -fr build
	rm -fr log
	rm -fr .auto.deps
	rm -fr ..make.deps.tmp
	rm -fr .config.cmd .config.old
	make -C config clean
	rm -fr config/at91bootstrap-config
	rm -fr config/conf
	rm -fr $(BINDIR)
	rm -f .installed
	rm -f .configured

config-clean:
	make -C config clean
	rm -fr config/at91bootstrap-config
	rm -f  config/.depend

clean:
	find . -type f \( -name .depend \
		-o -name '*.srec' \
		-o -name '*.elf' \
		-o -name '*.map' \
		-o -name '*.o' \
		-o -name '*~' \) \
		-print0 \
		| xargs -0 rm -f
	rm -fr $(obj)
	rm -fr .config .config.cmd .config.old
	rm -fr .auto.deps
	rm -f .installed
	rm -f .configured

tarball: distrib
	rm -fr ../source/at91bootstrap-$(VERSION)
	rm -fr ../source/at91bootstrap-$(VERSION).tar*
	mkdir -p ../source
	find . -depth -print0 | cpio --null -pvd ../source/at91bootstrap-$(VERSION)
	rm -fr ../source/at91bootstrap-$(VERSION)/.git
	tar -C ../source -cvf ../source/at91bootstrap-$(VERSION).tar at91bootstrap-$(VERSION)
	bzip2  ../source/at91bootstrap-$(VERSION).tar
	cp ../source/at91bootstrap-$(VERSION).tar.bz2 /usr/local/install/downloads

tarballx:	clean
	F=`basename $(CURDIR)` ; cd .. ; \
	T=`basename $(CURDIR)`-$(VERSION).tar ;  \
	tar --force-local -cvf $$T $$F; \
	rm -f $$T.bz2 ; \
	bzip2 $$T ; \
	cp -f $$T.bz2 /usr/local/install/downloads

