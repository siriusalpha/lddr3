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
	{ 0x37a0cba, "kfree" },
	{ 0x619e82bd, "kobject_put" },
	{ 0x43c0a527, "put_disk" },
	{ 0x421b232b, "del_gendisk" },
	{ 0xe6a56a46, "blk_cleanup_queue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x999e8297, "vfree" },
	{ 0xaf891cdb, "add_disk" },
	{ 0x50720c5f, "snprintf" },
	{ 0xbf2ff395, "alloc_disk" },
	{ 0xdc0ac47b, "blk_queue_logical_block_size" },
	{ 0x6e60ea4, "blk_init_queue" },
	{ 0x9d96cc26, "blk_queue_make_request" },
	{ 0xdab14a44, "blk_alloc_queue" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x6e922192, "__blk_end_request" },
	{ 0x87888106, "bio_endio" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x18601b2a, "blk_fetch_request" },
	{ 0x4348bea5, "__blk_end_request_cur" },
	{ 0x236c8c64, "memcpy" },
	{ 0xac9164dc, "check_disk_change" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x27e1a049, "printk" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xde0bdcff, "memset" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1F6FA36304B429C4C3C47E0");
