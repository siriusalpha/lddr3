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
	{ 0xc99deeb0, "seq_release" },
	{ 0x3e50425, "seq_read" },
	{ 0x77241a25, "seq_lseek" },
	{ 0x60fe9082, "remove_proc_entry" },
	{ 0xc5bfc55, "create_proc_entry" },
	{ 0x7d01d51, "kmem_cache_alloc_trace" },
	{ 0xe63641c7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x21a7d814, "seq_printf" },
	{ 0x78c65cd2, "seq_open" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BCEFFA8CB4F6FFCC551CD45");
