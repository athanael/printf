# printf

	[1;31m'CLEAN' ->	Destruction[0m:	files .o for the library [1;34mlibftprintf.a[0m
	[1;31m'CLEAN' ->	Destruction[0m:	files .o for the library [1;34mlibftprintf.a[0m completed successfully !
	[1;31m'FCLEAN' ->	Destruction[0m of library [1;34mlibftprintf.a[0m completed successfully !
	[33;32m'MAKE' ->	[1;34mlibftprintf.a[0m :	Library compilation in progress...
	[33;32m'MAKE' ->	[1;34mlibftprintf.a[0m :	Library compilation completed sucessfully !
FAILED TESTS:

# TEST NUMBER (TYPE OF ARG)
  INSTRUCTION();
  1. your function ft_printf
  2. unix function printf
     (returned value) -->written on stdout<--

# 0150 (long long)
  ft_printf("%lld", -9223372036854775808);
  1. (   20) -->-(<--
  2. (   20) -->-9223372036854775808<--

# 0152 (intmax_t)
  ft_printf("%jd", -9223372036854775808);
  1. (   20) -->-(<--
  2. (   20) -->-9223372036854775808<--

# 0162 (int)
  ft_printf("%4.15d", 42);
  1. (    4) -->  42<--
  2. (   15) -->000000000000042<--

# 0164 (int)
  ft_printf("%.10d", 4242);
  1. (    4) -->4242<--
  2. (   10) -->0000004242<--

# 0165 (int)
  ft_printf("%10.5d", 4242);
  1. (   10) -->      4242<--
  2. (   10) -->     04242<--

# 0166 (int)
  ft_printf("%-10.5d", 4242);
  1. (   10) -->4242      <--
  2. (   10) -->04242     <--

# 0167 (int)
  ft_printf("% 10.5d", 4242);
  1. (   10) -->      4242<--
  2. (   10) -->     04242<--

# 0168 (int)
  ft_printf("%+10.5d", 4242);
  1. (   10) -->     +4242<--
  2. (   10) -->    +04242<--

# 0169 (int)
  ft_printf("%-+10.5d", 4242);
  1. (   10) -->+4242     <--
  2. (   10) -->+04242    <--

# 0170 (int)
  ft_printf("%03.2d", 0);
  1. (    3) -->000<--
  2. (    3) --> 00<--

# 0171 (int)
  ft_printf("%03.2d", 1);
  1. (    3) -->001<--
  2. (    3) --> 01<--

# 0173 (int)
  ft_printf("@moulitest: %.10d", -42);
  1. (   15) -->@moulitest: -42<--
  2. (   23) -->@moulitest: -0000000042<--

# 0175 (int)
  ft_printf("@moulitest: %.d %.0d", 0, 0);
  1. (   15) -->@moulitest: 0 0<--
  2. (   13) -->@moulitest:  <--

# 0176 (int)
  ft_printf("@moulitest: %5.d %5.0d", 0, 0);
  1. (   23) -->@moulitest:     0     0<--
  2. (   23) -->@moulitest:            <--

# 0179 (unsigned int)
  ft_printf("%u", -1);
  1. (    2) -->4294967295<--
  2. (   10) -->4294967295<--

# 0180 (unsigned int)
  ft_printf("%u", 4294967295);
  1. (    2) -->4294967295<--
  2. (   10) -->4294967295<--

# 0182 (unsigned int)
  ft_printf("%5u", 4294967295);
  1. (    5) -->   4294967295<--
  2. (   10) -->4294967295<--

# 0183 (unsigned int)
  ft_printf("%15u", 4294967295);
  1. (   15) -->             4294967295<--
  2. (   15) -->     4294967295<--

# 0184 (unsigned int)
  ft_printf("%-15u", 4294967295);
  1. (   15) -->             4294967295<--
  2. (   15) -->4294967295     <--

# 0185 (unsigned int)
  ft_printf("%015u", 4294967295);
  1. (   15) -->             4294967295<--
  2. (   15) -->000004294967295<--

# 0186 (unsigned int)
  ft_printf("% u", 4294967295);
  1. (    2) -->4294967295<--
  2. (   10) -->4294967295<--

# 0187 (unsigned int)
  ft_printf("%+u", 4294967295);
  1. (    2) -->4294967295<--
  2. (   10) -->4294967295<--

# 0188 (unsigned long)
  ft_printf("%lu", 4294967295);
  1. (    2) -->4294967295<--
  2. (   10) -->4294967295<--

# 0189 (unsigned long)
  ft_printf("%lu", 4294967296);
  1. (    1) -->0<--
  2. (   10) -->4294967296<--

# 0190 (unsigned long)
  ft_printf("%lu", -42);
  1. (    3) -->4294967254<--
  2. (   20) -->18446744073709551574<--

# 0191 (unsigned long long)
  ft_printf("%llu", 4999999999);
  1. (    9) -->705032703<--
  2. (   10) -->4999999999<--

# 0192 (intmax_t)
  ft_printf("%ju", 4999999999);
  1. (    9) -->705032703<--
  2. (   10) -->4999999999<--

# 0193 (size_t)
  ft_printf("%ju", 4294967296);
  1. (    1) -->0<--
  2. (   10) -->4294967296<--

# 0194 (unsigned long)
  ft_printf("%U", 4294967295);
  1. (    2) -->4294967295<--
  2. (   10) -->4294967295<--

# 0195 (unsigned long)
  ft_printf("%hU", 4294967296);
  1. (    1) -->0<--
  2. (   10) -->4294967296<--

# 0196 (unsigned long)
  ft_printf("%U", 4294967296);
  1. (    1) -->0<--
  2. (   10) -->4294967296<--

# 0197 (unsigned int)
  ft_printf("@moulitest: %.5u", 42);
  1. (   14) -->@moulitest: 42<--
  2. (   17) -->@moulitest: 00042<--

--------------

SUCCESS TESTS:

   1.      ft_printf("");                                -> ""
   2.      ft_printf("\n");                              -> "$\n"
   3.      ft_printf("test");                            -> "test"
   4.      ft_printf("test\n");                          -> "test$\n"
   5.      ft_printf("1234");                            -> "1234"
   6.      ft_printf("%%");                              -> "%"
   7.      ft_printf("%5%");                             -> "    %"
   8.      ft_printf("%-5%");                            -> "%    "
   9.      ft_printf("%.0%");                            -> "%"
  10.      ft_printf("%%", "test");                      -> "%"
  11.      ft_printf("%   %", "test");                   -> "%"
  12.      ft_printf("%x", 42);                          -> "2a"
  13.      ft_printf("%X", 42);                          -> "2A"
  14.      ft_printf("%x", 0);                           -> "0"
  15.      ft_printf("%X", 0);                           -> "0"
  16.      ft_printf("%x", -42);                         -> "ffffffd6"
  17.      ft_printf("%X", -42);                         -> "FFFFFFD6"
  18.      ft_printf("%x", 4294967296);                  -> "0"
  19.      ft_printf("%X", 4294967296);                  -> "0"
  20.      ft_printf("%x", test);                        -> "0"
  21.      ft_printf("%10x", 42);                        -> "        2a"
  22.      ft_printf("%-10x", 42);                       -> "2a        "
  23.      ft_printf("%lx", 4294967296);                 -> "100000000"
  24.      ft_printf("%llX", 4294967296);                -> "100000000"
  25.      ft_printf("%hx", 4294967296);                 -> "0"
  26.      ft_printf("%hhX", 4294967296);                -> "0"
  27.      ft_printf("%jx", 4294967295);                 -> "ffffffff"
  28.      ft_printf("%jx", 4294967296);                 -> "100000000"
  29.      ft_printf("%jx", -4294967296);                -> "ffffffff00000000"
  30.      ft_printf("%jx", -4294967297);                -> "fffffffeffffffff"
  31.      ft_printf("%llx", 9223372036854775807);       -> "7fffffffffffffff"
  32.      ft_printf("%llx", 9223372036854775808);       -> "7fffffffffffffff"
  33.      ft_printf("%010x", 542);                      -> "000000021e"
  34.      ft_printf("%-15x", 542);                      -> "21e            "
  35.      ft_printf("%2x", 542);                        -> "21e"
  36.      ft_printf("%.2x", 5427);                      -> "1533"
  37.      ft_printf("%5.2x", 5427);                     -> " 1533"
  38.      ft_printf("%#x", 42);                         -> "0x2a"
  39.      ft_printf("%#llx", 9223372036854775807);      -> "0x7fffffffffffffff"
  40.      ft_printf("%#x", 0);                          -> "0"
  41.      ft_printf("%#x", 42);                         -> "0x2a"
  42.      ft_printf("%#X", 42);                         -> "0X2A"
  43.      ft_printf("%#8x", 42);                        -> "    0x2a"
  44.      ft_printf("%#08x", 42);                       -> "0x00002a"
  45.      ft_printf("%#-08x", 42);                      -> "0x2a    "
  46.      ft_printf("@moulitest: %#.x %#.0x", 0, 0);    -> "@moulitest:  "
  47.      ft_printf("@moulitest: %.x %.0x", 0, 0);      -> "@moulitest:  "
  48.      ft_printf("@moulitest: %5.x %5.0x", 0, 0);    -> "@moulitest:            "
  49.      ft_printf("%s", "abc");                       -> "abc"
  50.      ft_printf("%s", "this is a string");          -> "this is a string"
  51.      ft_printf("%s ", "this is a string");         -> "this is a string "
  52.      ft_printf("%s  ", "this is a string");        -> "this is a string  "
  53.      ft_printf("this is a %s", "string");          -> "this is a string"
  54.      ft_printf("%s is a string", "this");          -> "this is a string"
  55.      ft_printf("Line Feed %s", "\n");              -> "Line Feed $\n"
  56.      ft_printf("%10s is a string", "this");        -> "      this is a string"
  57.      ft_printf("%.2s is a string", "this");        -> "th is a string"
  58.      ft_printf("%5.2s is a string", "this");       -> "   th is a string"
  59.      ft_printf("%10s is a string", "");            -> "           is a string"
  60.      ft_printf("%.2s is a string", "");            -> " is a string"
  61.      ft_printf("%5.2s is a string", "");           -> "      is a string"
  62.      ft_printf("%-10s is a string", "this");       -> "this       is a string"
  63.      ft_printf("%-.2s is a string", "this");       -> "th is a string"
  64.      ft_printf("%-5.2s is a string", "this");      -> "th    is a string"
  65.      ft_printf("%-10s is a string", "");           -> "           is a string"
  66.      ft_printf("%-.2s is a string", "");           -> " is a string"
  67.      ft_printf("%-5.2s is a string", "");          -> "      is a string"
  68.      ft_printf("%s %s", "this", "is");             -> "this is"
  69.      ft_printf("%s %s %s", "this", "is", "a");     -> "this is a"
  70.      ft_printf("%s %s %s %s", "this", "is", "a", "multi"); -> "this is a multi"
  71.      ft_printf("%s %s %s %s string. gg!", "this", "is", "a", "multi", "string"); -> "this is a multi string. gg!"
  72.      ft_printf("%s%s%s%s%s", "this", "is", "a", "multi", "string"); -> "thisisamultistring"
  73.      ft_printf("@moulitest: %s", NULL);            -> "@moulitest: (null)"
  74.      ft_printf("%.2c", NULL);                      -> "^@"
  75.      ft_printf("%s %s", NULL, string);             -> "(null) string"
  76.      ft_printf("%c", 42);                          -> "*"
  77.      ft_printf("%5c", 42);                         -> "    *"
  78.      ft_printf("%-5c", 42);                        -> "*    "
  79.      ft_printf("@moulitest: %c", 0);               -> "@moulitest: ^@"
  80.      ft_printf("%2c", 0);                          -> " ^@"
  81.      ft_printf("null %c and text", 0);             -> "null ^@ and text"
  82.      ft_printf("% c", 0);                          -> "^@"
  83.      ft_printf("%o", 40);                          -> "50"
  84.      ft_printf("%5o", 41);                         -> "   51"
  85.      ft_printf("%05o", 42);                        -> "00052"
  86.      ft_printf("%-5o", 2500);                      -> "4704 "
  87.      ft_printf("%#6o", 2500);                      -> " 04704"
  88.      ft_printf("%-#6o", 2500);                     -> "04704 "
  89.      ft_printf("%-05o", 2500);                     -> "4704 "
  90.      ft_printf("%-5.10o", 2500);                   -> "0000004704"
  91.      ft_printf("%-10.5o", 2500);                   -> "04704     "
  92.      ft_printf("@moulitest: %o", 0);               -> "@moulitest: 0"
  93.      ft_printf("@moulitest: %.o %.0o", 0, 0);      -> "@moulitest:  "
  94.      ft_printf("@moulitest: %5.o %5.0o", 0, 0);    -> "@moulitest:            "
  95.      ft_printf("@moulitest: %#.o %#.0o", 0, 0);    -> "@moulitest: 0 0"
  96.      ft_printf("@moulitest: %.10o", 42);           -> "@moulitest: 0000000052"
  97.      ft_printf("%d", 1);                           -> "1"
  98.      ft_printf("the %d", 1);                       -> "the 1"
  99.      ft_printf("%d is one", 1);                    -> "1 is one"
 100.      ft_printf("%d", -1);                          -> "-1"
 101.      ft_printf("%d", 4242);                        -> "4242"
 102.      ft_printf("%d", -4242);                       -> "-4242"
 103.      ft_printf("%d", 2147483647);                  -> "2147483647"
 104.      ft_printf("%d", 2147483648);                  -> "-2147483648"
 105.      ft_printf("%d", -2147483648);                 -> "-2147483648"
 106.      ft_printf("%d", -2147483649);                 -> "2147483647"
 107.      ft_printf("% d", 42);                         -> " 42"
 108.      ft_printf("% d", -42);                        -> "-42"
 109.      ft_printf("%+d", 42);                         -> "+42"
 110.      ft_printf("%+d", -42);                        -> "-42"
 111.      ft_printf("%+d", 0);                          -> "+0"
 112.      ft_printf("%+d", 4242424242424242424242);     -> "-1"
 113.      ft_printf("% +d", 42);                        -> "+42"
 114.      ft_printf("% +d", -42);                       -> "-42"
 115.      ft_printf("%+ d", 42);                        -> "+42"
 116.      ft_printf("%+ d", -42);                       -> "-42"
 117.      ft_printf("%  +d", 42);                       -> "+42"
 118.      ft_printf("%  +d", -42);                      -> "-42"
 119.      ft_printf("%+  d", 42);                       -> "+42"
 120.      ft_printf("%+  d", -42);                      -> "-42"
 121.      ft_printf("% ++d", 42);                       -> "+42"
 122.      ft_printf("% ++d", -42);                      -> "-42"
 123.      ft_printf("%++ d", 42);                       -> "+42"
 124.      ft_printf("%++ d", -42);                      -> "-42"
 125.      ft_printf("%0d", -42);                        -> "-42"
 126.      ft_printf("%00d", -42);                       -> "-42"
 127.      ft_printf("%5d", 42);                         -> "   42"
 128.      ft_printf("%05d", 42);                        -> "00042"
 129.      ft_printf("%0+5d", 42);                       -> "+0042"
 130.      ft_printf("%5d", -42);                        -> "  -42"
 131.      ft_printf("%05d", -42);                       -> "-0042"
 132.      ft_printf("%0+5d", -42);                      -> "-0042"
 133.      ft_printf("%-5d", 42);                        -> "42   "
 134.      ft_printf("%-05d", 42);                       -> "42   "
 135.      ft_printf("%-5d", -42);                       -> "-42  "
 136.      ft_printf("%-05d", -42);                      -> "-42  "
 137.      ft_printf("%hd", 32767);                      -> "32767"
 138.      ft_printf("%hd", −32768);                   -> "0"
 139.      ft_printf("%hd", 32768);                      -> "-32768"
 140.      ft_printf("%hd", −32769);                   -> "0"
 141.      ft_printf("%hhd", 127);                       -> "127"
 142.      ft_printf("%hhd", 128);                       -> "-128"
 143.      ft_printf("%hhd", -128);                      -> "-128"
 144.      ft_printf("%hhd", -129);                      -> "127"
 145.      ft_printf("%ld", 2147483647);                 -> "2147483647"
 146.      ft_printf("%ld", -2147483648);                -> "-2147483648"
 147.      ft_printf("%ld", 2147483648);                 -> "2147483648"
 148.      ft_printf("%ld", -2147483649);                -> "-2147483649"
 149.      ft_printf("%lld", 9223372036854775807);       -> "9223372036854775807"
 150. FAIL ft_printf("%lld", -9223372036854775808);      -> "-9223372036854775808"
 151.      ft_printf("%jd", 9223372036854775807);        -> "9223372036854775807"
 152. FAIL ft_printf("%jd", -9223372036854775808);       -> "-9223372036854775808"
 153.      ft_printf("%zd", 4294967295);                 -> "4294967295"
 154.      ft_printf("%zd", 4294967296);                 -> "4294967296"
 155.      ft_printf("%zd", -0);                         -> "0"
 156.      ft_printf("%zd", -1);                         -> "-1"
 157.      ft_printf("%d", 1);                           -> "1"
 158.      ft_printf("%d %d", 1, -2);                    -> "1 -2"
 159.      ft_printf("%d %d %d", 1, -2, 33);             -> "1 -2 33"
 160.      ft_printf("%d %d %d %d", 1, -2, 33, 42);      -> "1 -2 33 42"
 161.      ft_printf("%d %d %d %d gg!", 1, -2, 33, 42, 0); -> "1 -2 33 42 gg!"
 162. FAIL ft_printf("%4.15d", 42);                      -> "000000000000042"
 163.      ft_printf("%.2d", 4242);                      -> "4242"
 164. FAIL ft_printf("%.10d", 4242);                     -> "0000004242"
 165. FAIL ft_printf("%10.5d", 4242);                    -> "     04242"
 166. FAIL ft_printf("%-10.5d", 4242);                   -> "04242     "
 167. FAIL ft_printf("% 10.5d", 4242);                   -> "     04242"
 168. FAIL ft_printf("%+10.5d", 4242);                   -> "    +04242"
 169. FAIL ft_printf("%-+10.5d", 4242);                  -> "+04242    "
 170. FAIL ft_printf("%03.2d", 0);                       -> " 00"
 171. FAIL ft_printf("%03.2d", 1);                       -> " 01"
 172.      ft_printf("%03.2d", -1);                      -> "-01"
 173. FAIL ft_printf("@moulitest: %.10d", -42);          -> "@moulitest: -0000000042"
 174.      ft_printf("@moulitest: %.d %.0d", 42, 43);    -> "@moulitest: 42 43"
 175. FAIL ft_printf("@moulitest: %.d %.0d", 0, 0);      -> "@moulitest:  "
 176. FAIL ft_printf("@moulitest: %5.d %5.0d", 0, 0);    -> "@moulitest:            "
 177.      ft_printf("%u", 0);                           -> "0"
 178.      ft_printf("%u", 1);                           -> "1"
 179. FAIL ft_printf("%u", -1);                          -> "4294967295"
 180. FAIL ft_printf("%u", 4294967295);                  -> "4294967295"
 181.      ft_printf("%u", 4294967296);                  -> "0"
 182. FAIL ft_printf("%5u", 4294967295);                 -> "4294967295"
 183. FAIL ft_printf("%15u", 4294967295);                -> "     4294967295"
 184. FAIL ft_printf("%-15u", 4294967295);               -> "4294967295     "
 185. FAIL ft_printf("%015u", 4294967295);               -> "000004294967295"
 186. FAIL ft_printf("% u", 4294967295);                 -> "4294967295"
 187. FAIL ft_printf("%+u", 4294967295);                 -> "4294967295"
 188. FAIL ft_printf("%lu", 4294967295);                 -> "4294967295"
 189. FAIL ft_printf("%lu", 4294967296);                 -> "4294967296"
 190. FAIL ft_printf("%lu", -42);                        -> "18446744073709551574"
 191. FAIL ft_printf("%llu", 4999999999);                -> "4999999999"
 192. FAIL ft_printf("%ju", 4999999999);                 -> "4999999999"
 193. FAIL ft_printf("%ju", 4294967296);                 -> "4294967296"
 194. FAIL ft_printf("%U", 4294967295);                  -> "4294967295"
 195. FAIL ft_printf("%hU", 4294967296);                 -> "4294967296"
 196. FAIL ft_printf("%U", 4294967296);                  -> "4294967296"
 197. FAIL ft_printf("@moulitest: %.5u", 42);            -> "@moulitest: 00042"