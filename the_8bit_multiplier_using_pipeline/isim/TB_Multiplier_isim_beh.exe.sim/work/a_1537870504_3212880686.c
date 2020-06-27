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


static void work_a_1537870504_3212880686_p_0(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9136U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15312);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15088);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_1(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9256U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15376);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15104);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_2(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9376U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15440);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15120);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_3(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9496U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15504);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15136);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_4(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9616U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15568);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15152);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_5(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9736U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15632);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15168);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_6(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9856U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15696);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15184);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_7(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 9976U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 15760);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 15200);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_1537870504_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(101, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 15824);
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

static void work_a_1537870504_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 15888);
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

static void work_a_1537870504_3212880686_p_10(char *t0)
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

LAB0:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 5480U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 15216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 7120U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (8 + 1);
    t2 = (t5 == t11);
    if (t2 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (8 + 2);
    t2 = (t5 == t11);
    if (t2 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 - 1);
    t12 = (t11 - 0);
    t17 = (t12 * 1);
    t18 = (1 * t17);
    t22 = (0U + t18);
    t1 = (t0 + 16016);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, t22, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 - 0);
    t17 = (t11 * 1);
    t18 = (1 * t17);
    t22 = (0U + t18);
    t1 = (t0 + 16016);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, t22, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 + 1);
    t1 = (t0 + 16080);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 15952);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 16016);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 + 1);
    t1 = (t0 + 16080);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 16016);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 7120U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 + 1);
    t1 = (t0 + 16080);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(128, ng0);
    t12 = (8 - 1);
    t1 = (t0 + 28608);
    *((int *)t1) = 0;
    t4 = (t0 + 28612);
    *((int *)t4) = t12;
    t13 = 0;
    t14 = t12;

LAB12:    if (t13 <= t14)
        goto LAB13;

LAB15:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 6640U);
    t3 = *((char **)t1);
    t5 = (8 + 1);
    t11 = (t5 - 0);
    t17 = (t11 * 1);
    t18 = (8U * t17);
    t22 = (0 + t18);
    t1 = (t3 + t22);
    t4 = (t0 + 16144);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t4, 1U, 8U, 0LL);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 16080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB13:    xsi_set_current_line(129, ng0);
    t7 = (t0 + 6640U);
    t8 = *((char **)t7);
    t15 = (8 - 1);
    t16 = (0 - t15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t7 = (t0 + 28608);
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
    t10 = (t0 + 28608);
    t26 = *((int *)t10);
    t27 = (t26 - 16);
    t28 = (t27 * -1);
    t29 = (1 * t28);
    t30 = (0U + t29);
    t31 = (t0 + 16144);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t6;
    xsi_driver_first_trans_delta(t31, t30, 1, 0LL);

LAB14:    t1 = (t0 + 28608);
    t13 = *((int *)t1);
    t3 = (t0 + 28612);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB15;

LAB16:    t5 = (t13 + 1);
    t13 = t5;
    t4 = (t0 + 28608);
    *((int *)t4) = t13;
    goto LAB12;

}

static void work_a_1537870504_3212880686_p_11(char *t0)
{
    char t13[16];
    char t15[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(111, ng0);

LAB3:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t7 = (8 - 0);
    t8 = (t7 * 1);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t10 + t6);
    t1 = (t2 + t11);
    t14 = ((IEEE_P_2592010699) + 4024);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 7;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 7);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t12 = xsi_base_array_concat(t12, t13, t14, (char)99, (unsigned char)2, (char)97, t1, t15, (char)101);
    t19 = (1U + 7U);
    t20 = (8U != t19);
    if (t20 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 16208);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t25 = (t0 + 15232);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t19, 0);
    goto LAB6;

}


extern void work_a_1537870504_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1537870504_3212880686_p_0,(void *)work_a_1537870504_3212880686_p_1,(void *)work_a_1537870504_3212880686_p_2,(void *)work_a_1537870504_3212880686_p_3,(void *)work_a_1537870504_3212880686_p_4,(void *)work_a_1537870504_3212880686_p_5,(void *)work_a_1537870504_3212880686_p_6,(void *)work_a_1537870504_3212880686_p_7,(void *)work_a_1537870504_3212880686_p_8,(void *)work_a_1537870504_3212880686_p_9,(void *)work_a_1537870504_3212880686_p_10,(void *)work_a_1537870504_3212880686_p_11};
	xsi_register_didat("work_a_1537870504_3212880686", "isim/TB_Multiplier_isim_beh.exe.sim/work/a_1537870504_3212880686.didat");
	xsi_register_executes(pe);
}
