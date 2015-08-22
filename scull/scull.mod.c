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
	{ 0x619e82bd, "kobject_put" },
	{ 0xad77df8, "cdev_del" },
	{ 0xe63641c7, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xa9601e2b, "cdev_init" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xfb17dec1, "__wake_up_sync" },
	{ 0xf5aa9a72, "no_llseek" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0x7026f1bc, "kobject_set_name" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x142c0e0c, "tty_devnum" },
	{ 0x5f554e61, "nonseekable_open" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xde0bdcff, "memset" },
	{ 0xf32286c, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x240c656, "fasync_helper" },
	{ 0xb4390f9a, "mcount" },
	{ 0x68aca4ad, "down" },
	{ 0x28eb7c3a, "cdev_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x1000e51, "schedule" },
	{ 0x7d01d51, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x71e3cecb, "up" },
	{ 0xfcd2181e, "kill_fasync" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F6240592236C5C75819EA60");
