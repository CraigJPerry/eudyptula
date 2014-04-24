/*
 *  Hello World Kernel Module. Eudyptula task 01.
 *
 *  Copyright (C) 2014 Craig J Perry
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Craig J Perry");
MODULE_DESCRIPTION("Hello, World! Eudyptula Challenge, Task 01");


static int __init hello_init(void)
{
	printk(KERN_INFO "Achievement Unlocked! Eudyptula Challenge, Task 01.\n");
	return 0;
}


static void __exit hello_cleanup(void)
{
	printk(KERN_INFO "Cleaning up hello-world module.\n");
}


module_init(hello_init);
module_exit(hello_cleanup);

