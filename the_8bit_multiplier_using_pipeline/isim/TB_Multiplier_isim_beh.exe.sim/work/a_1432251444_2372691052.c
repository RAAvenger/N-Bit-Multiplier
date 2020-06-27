/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Programing/University Projects/VHDL/the_8bit_multiplier_using_pipeline/TB_Multiplier.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1432251444_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1432251444_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(65, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_1432251444_2372691052_p_2(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4088);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 1);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 11);
    if (t2 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t9 = (t5 + 1);
    t1 = (t0 + 4360);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t9;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1832U);
    t8 = *((char **)t3);
    t9 = *((int *)t8);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, t9, 8);
    t10 = (t0 + 4232);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, t5, 8);
    t4 = (t0 + 4296);
    t8 = (t4 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t9 = (t5 + 1);
    t1 = (t0 + 4360);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t9;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4360);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 >= 255);
    if (t2 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t9 = (t5 + 10);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t9;
    xsi_driver_first_trans_fast(t1);

LAB11:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 >= 255);
    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB6;

LAB10:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t9 = (t5 + 10);
    t1 = (t0 + 4488);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t9;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4488);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

}


extern void work_a_1432251444_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1432251444_2372691052_p_0,(void *)work_a_1432251444_2372691052_p_1,(void *)work_a_1432251444_2372691052_p_2};
	xsi_register_didat("work_a_1432251444_2372691052", "isim/TB_Multiplier_isim_beh.exe.sim/work/a_1432251444_2372691052.didat");
	xsi_register_executes(pe);
}
