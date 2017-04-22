/* 
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __PERFMGR_INTERNAL_H__
#define __PERFMGR_INTERNAL_H__

#include "perfmgr.h"

/* data type */
enum {
	PERFMGR_SCN_TOUCH        = 0,
	PERFMGR_SCN_USER_SETTING = 1,
	PERFMGR_SCN_NUM = 2,  /* num should align to MAX_USER in perfmgr_boost.c */
};

/* prototype */
extern int init_perfmgr_touch(void);
extern int perfmgr_touch_suspend(void);

extern void perfmgr_boost_init(void);
extern void perfmgr_boost_core(int scn, int core);
extern void perfmgr_boost_freq(int scn, int freq);

#endif				/* !__PERFMGR_H__ */
