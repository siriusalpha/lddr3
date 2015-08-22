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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xad77df8, "cdev_del" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x834d7127, "remap_pfn_range" },
	{ 0x28eb7c3a, "cdev_add" },
	{ 0xa9601e2b, "cdev_init" },
	{ 0x111b98c0, "__get_page_tail" },
	{ 0x4604a43a, "mem_section" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "65668656B1B6B32D67C7D32");
