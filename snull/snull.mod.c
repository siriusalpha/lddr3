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
	{ 0x4e1056fe, "register_netdev" },
	{ 0xda3116a3, "alloc_netdev_mqs" },
	{ 0xd09cbdbb, "free_netdev" },
	{ 0x49ecaf47, "unregister_netdev" },
	{ 0xdd9c8482, "netif_rx" },
	{ 0xed3f22a4, "napi_complete" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x11b12332, "dev_alloc_skb" },
	{ 0x8e806151, "netif_receive_skb" },
	{ 0x44d6601c, "eth_type_trans" },
	{ 0xb736bab6, "skb_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x35543f98, "netif_napi_add" },
	{ 0x7de2ec7f, "ether_setup" },
	{ 0xe63641c7, "kmalloc_caches" },
	{ 0x7d01d51, "kmem_cache_alloc_trace" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xcaee2640, "__netif_schedule" },
	{ 0x7c614ca2, "consume_skb" },
	{ 0xcf43435f, "__napi_schedule" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xf400d502, "skb_push" },
	{ 0x236c8c64, "memcpy" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1A1271C5DFBFB2AEA1ADF15");
