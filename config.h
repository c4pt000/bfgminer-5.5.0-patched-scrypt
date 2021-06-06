/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* List of drivers being built */
#define BFG_ALGOLIST " SHA256d scrypt "

/* List of drivers being built */
#define BFG_DRIVERLIST " antminer avalon avalonmm bfx bifury bigpic bitforce bitforce:pci bitfury cairnsmore cointerra compac drillbit dualminer erupter gridseed hashbuster hashbusterusb hashfast icarus klondike littlefury modminer nanofury proxy proxy:getwork proxy:stratum rockminer twinfury x6500 zeusminer ztex "

/* List of drivers being built */
#define BFG_LOWLLIST " ftdi hid pci pci:uio pci:vfio spi usb vcom "

/* List of drivers being built */
#define BFG_OPTLIST " ncursesw6 "

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Major version */
#define CGMINER_MAJOR_VERSION 5

/* Micro version */
#define CGMINER_MINOR_SUBVERSION 0

/* Minor version */
#define CGMINER_MINOR_VERSION 5

/* */
/* #undef CONTROLLER_BOARD_BACKPLANE */

/* */
/* #undef CONTROLLER_BOARD_BBB */

/* */
/* #undef CONTROLLER_BOARD_RPI */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Maximum sockets before fd_set overflows */
/* #undef FD_SETSIZE */

/* Syntax of format-checking attribute */
#define FORMAT_SYNTAX_CHECK(...) __attribute__(( format(__VA_ARGS__) ))

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module memmem should be tested. */
#define GNULIB_TEST_MEMMEM 1

/* Define to 1 when the gnulib module sigaction should be tested. */
#define GNULIB_TEST_SIGACTION 1

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#define GNULIB_TEST_SIGPROCMASK 1

/* Define to 1 when the gnulib module strtok_r should be tested. */
#define GNULIB_TEST_STRTOK_R 1

/* Defined if ADL headers were found */
/* #undef HAVE_ADL */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define if __attribute__((cold)) */
#define HAVE_ATTRIBUTE_COLD 1

/* Define if __attribute__((const)) */
#define HAVE_ATTRIBUTE_CONST 1

/* Define if __attribute__((noreturn)) */
#define HAVE_ATTRIBUTE_NORETURN 1

/* Define if __attribute__((format(__printf__))) */
#define HAVE_ATTRIBUTE_PRINTF 1

/* Define if __attribute__((unused)) */
#define HAVE_ATTRIBUTE_UNUSED 1

/* Define if __attribute__((used)) */
#define HAVE_ATTRIBUTE_USED 1

/* Defined to 1 if lowlevel drivers are being used */
#define HAVE_BFG_LOWLEVEL 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define if have __builtin_constant_p */
#define HAVE_BUILTIN_CONSTANT_P 1

/* Define if have __builtin_types_compatible_p */
#define HAVE_BUILTIN_TYPES_COMPATIBLE_P 1

/* Define to use byteswap macros from byteswap.h */
#define HAVE_BYTESWAP_H 1

/* Define to 1 if you have the `chroot' function. */
#define HAVE_CHROOT 1

/* Defined to 1 if clock_gettime(CLOCK_MONOTONIC) is defined */
#define HAVE_CLOCK_GETTIME_MONOTONIC 1

/* Defined to 1 if clock_gettime(CLOCK_MONOTONIC_RAW) is defined */
#define HAVE_CLOCK_GETTIME_MONOTONIC_RAW 1

/* Define to 1 if you have the `clock_nanosleep' function. */
#define HAVE_CLOCK_NANOSLEEP 1

/* Defined to 1 if curses TUI support is wanted */
#define HAVE_CURSES 1

/* Define to 1 if you have the declaration of `libusb_error_name', and to 0 if
   you don't. */
#define HAVE_DECL_LIBUSB_ERROR_NAME 1

/* Define to 1 if you have the declaration of `memmem', and to 0 if you don't.
   */
#define HAVE_DECL_MEMMEM 1

/* Define to 1 if you have the declaration of `strtok_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOK_R 1

/* Define to use byteswap macros from endian.h */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to use byteswap macros from libkern/OSByteOrder.h */
/* #undef HAVE_LIBKERN_OSBYTEORDER_H */

/* Defined to 1 if libudev is wanted */
#define HAVE_LIBUDEV 1

/* Define if you have libusb-1.0 */
#define HAVE_LIBUSB 1

/* Define to 1 if you have the <linux/i2c-dev-user.h> header file. */
/* #undef HAVE_LINUX_I2C_DEV_USER_H */

/* Define to 1 if you have the <linux/spi/spidev.h> header file. */
#define HAVE_LINUX_SPI_SPIDEV_H 1

/* Define to 1 if you have the `log2' function. */
#define HAVE_LOG2 1

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the `memmem' function. */
#define HAVE_MEMMEM 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define if you have a native pthread_cancel */
#define HAVE_PTHREAD_CANCEL 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if memmem is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMMEM 1

/* Define to 1 if mempcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMPCPY 1

/* Define to 1 if memrchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMRCHR 1

/* Define to 1 if rawmemchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_RAWMEMCHR 1

/* Define to 1 if sigaction is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGACTION 1

/* Define to 1 if sigaddset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGADDSET 1

/* Define to 1 if sigdelset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGDELSET 1

/* Define to 1 if sigemptyset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGEMPTYSET 1

/* Define to 1 if sigfillset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGFILLSET 1

/* Define to 1 if sigismember is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGISMEMBER 1

/* Define to 1 if sigpending is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGPENDING 1

/* Define to 1 if sigprocmask is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGPROCMASK 1

/* Define to 1 if stpcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_STPCPY 1

/* Define to 1 if stpncpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_STPNCPY 1

/* Define to 1 if strcasestr is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCASESTR 1

/* Define to 1 if strchrnul is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCHRNUL 1

/* Define to 1 if strdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRDUP 1

/* Define to 1 if strerror_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRERROR_R 1

/* Define to 1 if strncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCAT 1

/* Define to 1 if strndup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNDUP 1

/* Define to 1 if strnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNLEN 1

/* Define to 1 if strpbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRPBRK 1

/* Define to 1 if strsep is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRSEP 1

/* Define to 1 if strsignal is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRSIGNAL 1

/* Define to 1 if strtok_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOK_R 1

/* Define to 1 if strverscmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRVERSCMP 1

/* Defined if libsensors was found */
/* #undef HAVE_SENSORS */

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigaltstack' function. */
#define HAVE_SIGALTSTACK 1

/* Define to 1 if the system has the type `siginfo_t'. */
/* #undef HAVE_SIGINFO_T */

/* Define to 1 if you have the `siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
/* #undef HAVE_SIGSET_T */

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Defined to 1 if yasm is being used */
/* #undef HAVE_SSE2 */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if `sa_sigaction' is a member of `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION_SA_SIGACTION 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to use byteswap macros from sys/endian.h */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/termios.h> header file. */
#define HAVE_SYS_TERMIOS_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/unistd.h> header file. */
#define HAVE_SYS_UNISTD_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define if __attribute__((warn_unused_result)) */
#define HAVE_WARN_UNUSED_RESULT 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Defined to 1 if Windows DDK USB headers are being used */
/* #undef HAVE_WIN_DDKUSB */

/* Defined to 1 if yasm is being used */
/* #undef HAVE_YASM */

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Defined to 1 if lowlevel ftdi drivers are being used */
#define NEED_BFG_LOWL_FTDI 1

/* Defined to 1 if lowlevel hid drivers are being used */
#define NEED_BFG_LOWL_HID 1

/* Defined to 1 if lowlevel mswin drivers are being used */
/* #undef NEED_BFG_LOWL_MSWIN */

/* Defined to 1 if lowlevel PCI drivers are being used */
#define NEED_BFG_LOWL_PCI 1

/* Defined to 1 if lowlevel SPI drivers are being used */
#define NEED_BFG_LOWL_SPI 1

/* Defined to 1 if lowlevel VCOM drivers are being used */
#define NEED_BFG_LOWL_VCOM 1

/* Defined if linux/i2c.h is needed to supplement linux/i2c-dev.h */
#define NEED_LINUX_I2C_H 1

/* Syntax of noreturn attribute */
#define NORETURN __attribute__((noreturn))

/* Name of package */
#define PACKAGE "bfgminer"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "luke-jr+bfgminer@utopios.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "bfgminer"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "bfgminer 5.5.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "bfgminer"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "5.5.0"

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_ALCHEMIST */

/* Defined to 1 if []_this_name support is wanted */
#define USE_AVALON 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_AVALONMM 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_BFSB */

/* Defined to 1 if []_this_name support is wanted */
#define USE_BFX 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_BIFURY 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_BIGPIC 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_BITFORCE 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_BITFURY 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_BITMAIN */

/* Defined to 1 if []_this_name support is wanted */
#define USE_COINTERRA 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_CPUMINING */

/* Defined to 1 if []_this_name support is wanted */
#define USE_DRILLBIT 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_DUALMINER 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_GRIDSEED 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_HASHBUSTER 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_HASHBUSTERUSB 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_HASHFAST 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_ICARUS 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_JINGTIAN */

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_KECCAK */

/* Defined to 1 if []_this_name support is wanted */
#define USE_KLONDIKE 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_KNC */

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_KNCASIC */

/* Defined to 1 if libevent support is wanted */
#define USE_LIBEVENT 1

/* Defined to 1 if libmicrohttpd support is wanted */
#define USE_LIBMICROHTTPD 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_LITTLEFURY 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_METABANK */

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_MINERGATE */

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_MINION */

/* Defined to 1 if []_this_name support is wanted */
#define USE_MODMINER 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_NANOFURY 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_OPENCL */

/* Defined to 1 if OpenCL fullheader kernel interface is wanted */
/* #undef USE_OPENCL_FULLHEADER */

/* Defined to 1 if []_this_name support is wanted */
#define USE_ROCKMINER 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_SCRYPT 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_SHA256D 1

/* Defined to 1 if []_this_name support is wanted */
/* #undef USE_TITAN */

/* Defined to 1 if []_this_name support is wanted */
#define USE_TWINFURY 1

/* Defined to 1 if lowlevel PCI drivers should support UIO */
#define USE_UIO 1

/* Defined to 1 if curses supports wide characters */
#define USE_UNICODE 1

/* Defined to 1 if lowlevel PCI drivers should support VFIO */
#define USE_VFIO 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_X6500 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_ZEUSMINER 1

/* Defined to 1 if []_this_name support is wanted */
#define USE_ZTEX 1

/* Version number of package */
#define VERSION "5.5.0"

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define if your platform is big endian */
/* #undef WORDS_BIGENDIAN */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Turns _Static_assert into noop for compilers that don't support it */
/* #undef _Static_assert */

/* "WinNT version for XP+ support" */
/* #undef _WIN32_WINNT */

/* Define to 500 only on HP-UX. */
/* #undef _XOPEN_SOURCE */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to 16-bit byteswap macro */
/* #undef bswap_16 */

/* Define to 16-bit byteswap macro */
/* #undef bswap_32 */

/* Define to 16-bit byteswap macro */
/* #undef bswap_64 */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for MacOS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif



#ifdef WIN32
#include "winhacks.h"
#endif

