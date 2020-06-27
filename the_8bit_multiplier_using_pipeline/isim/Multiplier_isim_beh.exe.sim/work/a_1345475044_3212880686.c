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
static const char *ng0 = "E:/Programing/University Projects/VHDL/the_8bit_multiplier_using_pipeline/Multiplier.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1345475044_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 13096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1345475044_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 13160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1345475044_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 5480U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 13016);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 7280U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 7280U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (8 + 1);
    t2 = (t5 == t11);
    if (t2 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 7280U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 - 1);
    t12 = (t11 - 0);
    t17 = (t12 * 1);
    t18 = (1 * t17);
    t22 = (0U + t18);
    t1 = (t0 + 13288);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, t22, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 7280U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 - 0);
    t17 = (t11 * 1);
    t18 = (1 * t17);
    t22 = (0U + t18);
    t1 = (t0 + 13288);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, t22, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 7280U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 + 1);
    t1 = (t0 + 13352);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 13224);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 13288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 7280U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 + 1);
    t1 = (t0 + 13352);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(129, ng0);
    t12 = (8 - 1);
    t1 = (t0 + 24916);
    *((int *)t1) = 0;
    t4 = (t0 + 24920);
    *((int *)t4) = t12;
    t13 = 0;
    t14 = t12;

LAB10:    if (t13 <= t14)
        goto LAB11;

LAB13:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 6800U);
    t3 = *((char **)t1);
    t5 = (8 + 1);
    t11 = (t5 - 0);
    t17 = (t11 * 1);
    t18 = (8U * t17);
    t22 = (0 + t18);
    t1 = (t3 + t22);
    t4 = (t0 + 13416);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t4, 1U, 8U, 0LL);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 13352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB11:    xsi_set_current_line(130, ng0);
    t7 = (t0 + 6800U);
    t8 = *((char **)t7);
    t15 = (8 - 1);
    t16 = (0 - t15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t7 = (t0 + 24916);
    t19 = *((int *)t7);
    t20 = (t19 + 1);
    t21 = (t20 - 0);
    t22 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 9, 1, t20);
    t23 = (8U * t22);
    t24 = (0 + t23);
    t25 = (t24 + t18);
    t9 = (t8 + t25);
    t6 = *((unsigned char *)t9);
    t10 = (t0 + 24916);
    t26 = *((int *)t10);
    t27 = (t26 - 16);
    t28 = (t27 * -1);
    t29 = (1 * t28);
    t30 = (0U + t29);
    t31 = (t0 + 13416);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t6;
    xsi_driver_first_trans_delta(t31, t30, 1, 0LL);

LAB12:    t1 = (t0 + 24916);
    t13 = *((int *)t1);
    t3 = (t0 + 24920);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB13;

LAB14:    t5 = (t13 + 1);
    t13 = t5;
    t4 = (t0 + 24916);
    *((int *)t4) = t13;
    goto LAB10;

}


extern void work_a_1345475044_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1345475044_3212880686_p_0,(void *)work_a_1345475044_3212880686_p_1,(void *)work_a_1345475044_3212880686_p_2};
	xsi_register_didat("work_a_1345475044_3212880686", "isim/Multiplier_isim_beh.exe.sim/work/a_1345475044_3212880686.didat");
	xsi_register_executes(pe);
}
