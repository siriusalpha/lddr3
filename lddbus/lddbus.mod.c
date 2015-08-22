#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2288057, "module_layout" },
	{ 0x42d5dfd, "bus_register" },
	{ 0x88c20b60, "driver_register" },
	{ 0x25ec1b28, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0x164c78f1, "device_register" },
	{ 0x27e1a049, "printk" },
	{ 0x4b952a9b, "driver_unregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0xddeb59c8, "bus_unregister" },
	{ 0xd4e894f9, "driver_create_file" },
	{ 0xaa6e81c1, "bus_create_file" },
	{ 0xca231968, "device_unregister" },
	{ 0x50720c5f, "snprintf" },
	{ 0x8037407e, "dev_set_name" },
	{ 0xa7f92105, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B83CDDD404C60E3D4886AAE");
