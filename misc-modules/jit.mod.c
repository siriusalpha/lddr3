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
	{ 0x60fe9082, "remove_proc_entry" },
	{ 0xc5bfc55, "create_proc_entry" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x7d01d51, "kmem_cache_alloc_trace" },
	{ 0xe63641c7, "kmalloc_caches" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0x67053080, "current_kernel_time" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1000e51, "schedule" },
	{ 0x91715312, "sprintf" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xf32286c, "current_task" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FDD818A2565042FE2DA5160");
