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
	{ 0x44269e0a, "kmem_cache_destroy" },
	{ 0xad77df8, "cdev_del" },
	{ 0xe63641c7, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xa9601e2b, "cdev_init" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xaa145b4e, "aio_complete" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xde0bdcff, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x7916e935, "kmem_cache_free" },
	{ 0x28eb7c3a, "cdev_add" },
	{ 0xb18cc7f5, "kmem_cache_alloc" },
	{ 0xf1bea6f1, "schedule_delayed_work" },
	{ 0x7d01d51, "kmem_cache_alloc_trace" },
	{ 0xcc9e5d76, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x71e3cecb, "up" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F4BEF6518DB5433BDB4740A");
