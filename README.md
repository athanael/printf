# printf

>>>> Tests for ft_printf
Source: github.com/yyang42/moulitest
Legend: (.) Ok / (F) Fail / (S) Segfault / (B) Bus error / (T) Timeout / (A) Abort

[ -------STARTING ALL UNIT TESTS------- ]
>>>> 50_min_width.spec.c --------- [FAIL] ..........FF [FAIL] wideString -> printf("{%30S}", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B")
>>>> 52_min_width_flag_zero.spec.c [FAIL] .....F..FF. [FAIL] test_min_width_with_hexa_caps -> printf("{%030X}", 0xFFFF)
>>>> 53_min_width_non_valid_conv.s [FAIL] F [FAIL] nonValidConv_negativeMinWidth -> printf("{%-15Z}", 123)
>>>> 60_flag_sharp.spec.c -------- [FAIL] .F.F....... [FAIL] test_octal_zero -> printf("%#o", 0)
>>>> 69_flag_mix.spec.c ---------- [FAIL] ...F..... [FAIL] mix_space_zero -> printf("{% 03d}", 0)
>>>> 70_precision_for_diu.spec.c - [FAIL] .................FFFF......... [FAIL] test_precision_i -> printf("%.4i", 42)
>>>> 71_precision_for_oOxX.spec.c  [FAIL] .........FFFFF.F..FF..F.FFFFFFF [FAIL] test_precision_o_up -> printf("%.4O", 42)
>>>> 72_precision_for_sS.spec.c -- [FAIL] .........FFFFF [FAIL] test_precision_S -> printf("%.4S", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B")
>>>> 74_precision_for_p.spec.c --- [FAIL] FFFFFF [FAIL] pNullPointer_zeroPrecision -> printf("%.0p, %.p", 0, 0)
>>>> 79_precision_mixed_with_flags [FAIL] ..F...FFFF [FAIL] test_precision_p_zero -> printf("%.p, %.0p", 0, 0)
>>>> 90_incomptbl_values_sdpi.spec [FAIL] .FF. [FAIL] test_zi -> printf("%zi", LLONG_MIN)
>>>> 92_incomptbl_values_oOxX.spec [FAIL] F..FFFF [FAIL] test_octal_neg -> printf("%o, %ho, %hho", -42, -42, -42)
>>>> bonus_01_wildcard.spec.c ---- [FAIL] FFFFFFFFFFFFF [FAIL] wildcard_for_min_width_positive -> printf("%*d", 5, 42)
>>>> bonus_02_wildcard_multi.spec. [FAIL] F [FAIL] wildcard_for_min_width_positive -> printf("%*.*d", 0, 3, 0)
>>>> bonus_03_wildcard_flag_mix.sp [FAIL] FFFF [FAIL] digit_wildcard_and_min_width_value1 -> printf("{%3*d}", 0, 0)
>>>> bonus_10_conv_fF.spec.c ----- [FAIL] FFFF [FAIL] simple_small_nbr -> printf("{%f}{%F}", 1.42, 1.42)
[ ----------END OF UNIT TESTS---------- ]

>>>> Result: 32/48 test suites passed. 322/396 tests passed (dots).