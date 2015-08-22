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
	{ 0xaf321b5e, "usb_deregister" },
	{ 0x15edf1e, "usb_register_driver" },
	{ 0x6ea2d1dc, "usb_register_dev" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x33cba43c, "usb_get_dev" },
	{ 0x83800bfa, "kref_init" },
	{ 0x7d01d51, "kmem_cache_alloc_trace" },
	{ 0xe63641c7, "kmalloc_caches" },
	{ 0x89688c32, "_dev_info" },
	{ 0x847baaf8, "usb_deregister_dev" },
	{ 0xd6a81b1, "dev_set_drvdata" },
	{ 0x9775cdc, "kref_get" },
	{ 0x13b01435, "dev_get_drvdata" },
	{ 0xe0cbad98, "usb_find_interface" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xce5b2d17, "usb_bulk_msg" },
	{ 0x27e1a049, "printk" },
	{ 0xf334556c, "usb_submit_urb" },
	{ 0x2c681963, "usb_free_urb" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3b8c72d9, "usb_alloc_coherent" },
	{ 0xb38534bd, "usb_alloc_urb" },
	{ 0xf19d2d9e, "__dynamic_dev_dbg" },
	{ 0x1a06d309, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x621b3765, "usb_put_dev" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "049FDAF0B0C4F9F6787CE55");
