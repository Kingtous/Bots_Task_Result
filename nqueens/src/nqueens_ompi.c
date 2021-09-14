/* (l216) typedef long unsigned int size_t; */
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
/* (l328) typedef int wchar_t; */
# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
enum _noname0_ {
    P_ALL, P_PID, P_PGID
  };

/* (l57) typedef enum _noname0_  idtype_t; */
# 57 "/usr/include/x86_64-linux-gnu/bits/waitflags.h"
/* (l207) typedef float _Float32; */
# 207 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h"
/* (l244) typedef double _Float64; */
# 244 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h"
/* (l261) typedef double _Float32x; */
# 261 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h"
/* (l278) typedef long double _Float64x; */
# 278 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h"
struct _noname1_ {
    int quot;
    int rem;
  };

/* (l62) typedef struct _noname1_  div_t; */
# 62 "/usr/include/stdlib.h"
struct _noname2_ {
    long int quot;
    long int rem;
  };

/* (l70) typedef struct _noname2_  ldiv_t; */
# 70 "/usr/include/stdlib.h"
struct _noname3_ {
    long long int quot;
    long long int rem;
  };

/* (l80) typedef struct _noname3_  lldiv_t; */
# 80 "/usr/include/stdlib.h"
# 97 "/usr/include/stdlib.h"
extern long unsigned int __ctype_get_mb_cur_max(void);
extern double atof(const char * __nptr);
extern int atoi(const char * __nptr);
extern long int atol(const char * __nptr);
extern long long int atoll(const char * __nptr);
extern double strtod(const char * __nptr, char ** __endptr);
extern float strtof(const char * __nptr, char ** __endptr);
extern long double strtold(const char * __nptr, char ** __endptr);
extern long int strtol(const char * __nptr, char ** __endptr, int __base);
extern unsigned long int strtoul(const char * __nptr, char ** __endptr, int __base);
extern long long int strtoq(const char * __nptr, char ** __endptr, int __base);
extern unsigned long long int strtouq(const char * __nptr, char ** __endptr, int __base);
extern long long int strtoll(const char * __nptr, char ** __endptr, int __base);
extern unsigned long long int strtoull(const char * __nptr, char ** __endptr, int __base);
extern char * l64a(long int __n);
extern long int a64l(const char * __s);

/* (l30) typedef unsigned char __u_char; */
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l31) typedef unsigned short int __u_short; */
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l32) typedef unsigned int __u_int; */
# 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l33) typedef unsigned long int __u_long; */
# 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l36) typedef signed char __int8_t; */
# 36 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l37) typedef unsigned char __uint8_t; */
# 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l38) typedef signed short int __int16_t; */
# 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l39) typedef unsigned short int __uint16_t; */
# 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l40) typedef signed int __int32_t; */
# 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l41) typedef unsigned int __uint32_t; */
# 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l43) typedef signed long int __int64_t; */
# 43 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l44) typedef unsigned long int __uint64_t; */
# 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l52) typedef long int __quad_t; */
# 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l53) typedef unsigned long int __u_quad_t; */
# 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l61) typedef long int __intmax_t; */
# 61 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l62) typedef unsigned long int __uintmax_t; */
# 62 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l133) typedef unsigned long int __dev_t; */
# 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l134) typedef unsigned int __uid_t; */
# 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l135) typedef unsigned int __gid_t; */
# 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l136) typedef unsigned long int __ino_t; */
# 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l137) typedef unsigned long int __ino64_t; */
# 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l138) typedef unsigned int __mode_t; */
# 138 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l139) typedef unsigned long int __nlink_t; */
# 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l140) typedef long int __off_t; */
# 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l141) typedef long int __off64_t; */
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l142) typedef int __pid_t; */
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
struct _noname4_ {
    int __val[ 2];
  };

/* (l143) typedef struct _noname4_  __fsid_t; */
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l144) typedef long int __clock_t; */
# 144 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l145) typedef unsigned long int __rlim_t; */
# 145 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l146) typedef unsigned long int __rlim64_t; */
# 146 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l147) typedef unsigned int __id_t; */
# 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l148) typedef long int __time_t; */
# 148 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l149) typedef unsigned int __useconds_t; */
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l150) typedef long int __suseconds_t; */
# 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l152) typedef int __daddr_t; */
# 152 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l153) typedef int __key_t; */
# 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l156) typedef int __clockid_t; */
# 156 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l159) typedef void * __timer_t; */
# 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l162) typedef long int __blksize_t; */
# 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l167) typedef long int __blkcnt_t; */
# 167 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l168) typedef long int __blkcnt64_t; */
# 168 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l171) typedef unsigned long int __fsblkcnt_t; */
# 171 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l172) typedef unsigned long int __fsblkcnt64_t; */
# 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l175) typedef unsigned long int __fsfilcnt_t; */
# 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l176) typedef unsigned long int __fsfilcnt64_t; */
# 176 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l179) typedef long int __fsword_t; */
# 179 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l181) typedef long int __ssize_t; */
# 181 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l184) typedef long int __syscall_slong_t; */
# 184 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l186) typedef unsigned long int __syscall_ulong_t; */
# 186 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l190) typedef __off64_t __loff_t; */
# 190 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l191) typedef char * __caddr_t; */
# 191 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l194) typedef long int __intptr_t; */
# 194 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l197) typedef unsigned int __socklen_t; */
# 197 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l202) typedef int __sig_atomic_t; */
# 202 "/usr/include/x86_64-linux-gnu/bits/types.h"
/* (l33) typedef __u_char u_char; */
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l34) typedef __u_short u_short; */
# 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l35) typedef __u_int u_int; */
# 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l36) typedef __u_long u_long; */
# 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l37) typedef __quad_t quad_t; */
# 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l38) typedef __u_quad_t u_quad_t; */
# 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l39) typedef __fsid_t fsid_t; */
# 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l44) typedef __loff_t loff_t; */
# 44 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l48) typedef __ino_t ino_t; */
# 48 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l60) typedef __dev_t dev_t; */
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l65) typedef __gid_t gid_t; */
# 65 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l70) typedef __mode_t mode_t; */
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l75) typedef __nlink_t nlink_t; */
# 75 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l80) typedef __uid_t uid_t; */
# 80 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l86) typedef __off_t off_t; */
# 86 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l98) typedef __pid_t pid_t; */
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l104) typedef __id_t id_t; */
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l109) typedef __ssize_t ssize_t; */
# 109 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l115) typedef __daddr_t daddr_t; */
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l116) typedef __caddr_t caddr_t; */
# 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l122) typedef __key_t key_t; */
# 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l7) typedef __clock_t clock_t; */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
/* (l7) typedef __clockid_t clockid_t; */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h"
/* (l7) typedef __time_t time_t; */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h"
/* (l7) typedef __timer_t timer_t; */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h"
/* (l149) typedef unsigned long int ulong; */
# 149 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l150) typedef unsigned short int ushort; */
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l151) typedef unsigned int uint; */
# 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l24) typedef __int8_t int8_t; */
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
/* (l25) typedef __int16_t int16_t; */
# 25 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
/* (l26) typedef __int32_t int32_t; */
# 26 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
/* (l27) typedef __int64_t int64_t; */
# 27 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
/* (l161) typedef unsigned char u_int8_t; */
# 161 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l162) typedef unsigned short int u_int16_t; */
# 162 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l163) typedef unsigned int u_int32_t; */
# 163 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l165) typedef unsigned long int u_int64_t; */
# 165 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l170) typedef int register_t; */
# 170 "/usr/include/x86_64-linux-gnu/sys/types.h"

static unsigned short int __bswap_16(unsigned short int __bsx)
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h"
{
  return (((unsigned short int) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8))));
}


static unsigned int __bswap_32(unsigned int __bsx)
# 89 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{
  return (((((__bsx) & 0xff000000) >> 24) | (((__bsx) & 0x00ff0000) >> 8) | (((__bsx) & 0x0000ff00) << 8) | (((__bsx) & 0x000000ff) << 24)));
}


static unsigned long int __bswap_64(unsigned long int __bsx)
{
  return (((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56)));
}


static unsigned short int __uint16_identity(unsigned short int __x)
# 34 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{
  return (__x);
}


static unsigned int __uint32_identity(unsigned int __x)
{
  return (__x);
}


static unsigned long int __uint64_identity(unsigned long int __x)
{
  return (__x);
}

struct _noname5_ {
    unsigned long int __val[ (1024 / (8 * sizeof(unsigned long int)))];
  };

/* (l8) typedef struct _noname5_  __sigset_t; */
# 8 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
/* (l7) typedef __sigset_t sigset_t; */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h"
# 12 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
struct timeval {
    long int tv_sec;
    long int tv_usec;
  };
# 12 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
struct timespec {
    long int tv_sec;
    long int tv_nsec;
  };

/* (l43) typedef __suseconds_t suseconds_t; */
# 43 "/usr/include/x86_64-linux-gnu/sys/select.h"
/* (l49) typedef long int __fd_mask; */
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h"
struct _noname6_ {
    long int (__fds_bits[ 1024 / (8 * (int) sizeof(long int ))]);
  };

/* (l70) typedef struct _noname6_  fd_set; */
# 70 "/usr/include/x86_64-linux-gnu/sys/select.h"
/* (l77) typedef __fd_mask fd_mask; */
# 77 "/usr/include/x86_64-linux-gnu/sys/select.h"
# 104 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds, struct _noname6_ (* __readfds), struct _noname6_ (* __writefds), struct _noname6_ (* __exceptfds), struct timeval * __timeout);
extern int pselect(int __nfds, struct _noname6_ (* __readfds), struct _noname6_ (* __writefds), struct _noname6_ (* __exceptfds), const struct timespec * __timeout, const struct _noname5_ (* __sigmask));
# 73 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
extern unsigned int gnu_dev_major(unsigned long int __dev);
extern unsigned int gnu_dev_minor(unsigned long int __dev);
extern unsigned long int gnu_dev_makedev(unsigned int __major, unsigned int __minor);

/* (l212) typedef __blksize_t blksize_t; */
# 212 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l219) typedef __blkcnt_t blkcnt_t; */
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l223) typedef __fsblkcnt_t fsblkcnt_t; */
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h"
/* (l227) typedef __fsfilcnt_t fsfilcnt_t; */
# 227 "/usr/include/x86_64-linux-gnu/sys/types.h"
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t {
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    signed char __rwelision;
    unsigned char __pad1[ 7];
    unsigned long int __pad2;
    unsigned int __flags;
  };
struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
  };

/* (l86) typedef struct __pthread_internal_list  __pthread_list_t; */
# 86 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
# 146 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_mutex_s {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list __list;
  };
struct __pthread_cond_s {
    union {
        unsigned long long int __wseq;
        struct {
            unsigned int __low;
            unsigned int __high;
          } __wseq32;
      } ;
    union {
        unsigned long long int __g1_start;
        struct {
            unsigned int __low;
            unsigned int __high;
          } __g1_start32;
      } ;
    unsigned int __g_refs[ 2];
    unsigned int __g_size[ 2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[ 2];
  };

/* (l27) typedef unsigned long int pthread_t; */
# 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname7_ {
    char __size[ 4];
    int __align;
  };

/* (l36) typedef union _noname7_  pthread_mutexattr_t; */
# 36 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname8_ {
    char __size[ 4];
    int __align;
  };

/* (l45) typedef union _noname8_  pthread_condattr_t; */
# 45 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
/* (l49) typedef unsigned int pthread_key_t; */
# 49 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
/* (l53) typedef int pthread_once_t; */
# 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t {
    char __size[ 56];
    long int __align;
  };

/* (l62) typedef union pthread_attr_t  pthread_attr_t; */
# 62 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname9_ {
    struct __pthread_mutex_s __data;
    char __size[ 40];
    long int __align;
  };

/* (l72) typedef union _noname9_  pthread_mutex_t; */
# 72 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname10_ {
    struct __pthread_cond_s __data;
    char __size[ 48];
    long long int __align;
  };

/* (l80) typedef union _noname10_  pthread_cond_t; */
# 80 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname11_ {
    struct __pthread_rwlock_arch_t __data;
    char __size[ 56];
    long int __align;
  };

/* (l91) typedef union _noname11_  pthread_rwlock_t; */
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname12_ {
    char __size[ 8];
    long int __align;
  };

/* (l97) typedef union _noname12_  pthread_rwlockattr_t; */
# 97 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
/* (l103) typedef volatile int pthread_spinlock_t; */
# 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname13_ {
    char __size[ 32];
    long int __align;
  };

/* (l112) typedef union _noname13_  pthread_barrier_t; */
# 112 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union _noname14_ {
    char __size[ 4];
    int __align;
  };

/* (l118) typedef union _noname14_  pthread_barrierattr_t; */
# 118 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
# 401 "/usr/include/stdlib.h"
extern long int random(void);
extern void srandom(unsigned int __seed);
extern char * initstate(unsigned int __seed, char * __statebuf, long unsigned int __statelen);
extern char * setstate(char * __statebuf);
struct random_data {
    signed int (* fptr);
    signed int (* rptr);
    signed int (* state);
    int rand_type;
    int rand_deg;
    int rand_sep;
    signed int (* end_ptr);
  };
extern int random_r(struct random_data * __buf, signed int (* __result));
extern int srandom_r(unsigned int __seed, struct random_data * __buf);
extern int initstate_r(unsigned int __seed, char * __statebuf, long unsigned int __statelen, struct random_data * __buf);
extern int setstate_r(char * __statebuf, struct random_data * __buf);
extern int rand(void);
extern void srand(unsigned int __seed);
extern int rand_r(unsigned int * __seed);
extern double drand48(void);
extern double erand48(unsigned short int __xsubi[ 3]);
extern long int lrand48(void);
extern long int nrand48(unsigned short int __xsubi[ 3]);
extern long int mrand48(void);
extern long int jrand48(unsigned short int __xsubi[ 3]);
extern void srand48(long int __seedval);
extern unsigned short int * seed48(unsigned short int __seed16v[ 3]);
extern void lcong48(unsigned short int __param[ 7]);
struct drand48_data {
    unsigned short int __x[ 3];
    unsigned short int __old_x[ 3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
extern int drand48_r(struct drand48_data * __buffer, double * __result);
extern int erand48_r(unsigned short int __xsubi[ 3], struct drand48_data * __buffer, double * __result);
extern int lrand48_r(struct drand48_data * __buffer, long int * __result);
extern int nrand48_r(unsigned short int __xsubi[ 3], struct drand48_data * __buffer, long int * __result);
extern int mrand48_r(struct drand48_data * __buffer, long int * __result);
extern int jrand48_r(unsigned short int __xsubi[ 3], struct drand48_data * __buffer, long int * __result);
extern int srand48_r(long int __seedval, struct drand48_data * __buffer);
extern int seed48_r(unsigned short int __seed16v[ 3], struct drand48_data * __buffer);
extern int lcong48_r(unsigned short int __param[ 7], struct drand48_data * __buffer);
extern void * malloc(long unsigned int __size);
extern void * calloc(long unsigned int __nmemb, long unsigned int __size);
extern void * realloc(void * __ptr, long unsigned int __size);
extern void free(void * __ptr);
# 32 "/usr/include/alloca.h"
extern void * alloca(long unsigned int __size);
# 572 "/usr/include/stdlib.h"
extern void * valloc(long unsigned int __size);
extern int posix_memalign(void ** __memptr, long unsigned int __alignment, long unsigned int __size);
extern void * aligned_alloc(long unsigned int __alignment, long unsigned int __size);
extern void abort(void);
extern int atexit(void (* __func)(void));
extern int at_quick_exit(void (* __func)(void));
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg);
extern void exit(int __status);
extern void quick_exit(int __status);
extern void _Exit(int __status);
extern char * getenv(const char * __name);
extern int putenv(char * __string);
extern int setenv(const char * __name, const char * __value, int __replace);
extern int unsetenv(const char * __name);
extern int clearenv(void);
extern char * mktemp(char * __template);
extern int mkstemp(char * __template);
extern int mkstemps(char * __template, int __suffixlen);
extern char * mkdtemp(char * __template);
extern int system(const char * __command);
extern char * realpath(const char * __name, char * __resolved);

/* (l805) typedef int (* __compar_fn_t) (const void *, const void *); */
# 805 "/usr/include/stdlib.h"
extern void * bsearch(const void * __key, const void * __base, long unsigned int __nmemb, long unsigned int __size, int (* __compar)(const void *, const void *));
extern void qsort(void * __base, long unsigned int __nmemb, long unsigned int __size, int (* __compar)(const void *, const void *));
extern int abs(int __x);
extern long int labs(long int __x);
extern long long int llabs(long long int __x);
extern struct _noname1_ div(int __numer, int __denom);
extern struct _noname2_ ldiv(long int __numer, long int __denom);
extern struct _noname3_ lldiv(long long int __numer, long long int __denom);
extern char * ecvt(double __value, int __ndigit, int * __decpt, int * __sign);
extern char * fcvt(double __value, int __ndigit, int * __decpt, int * __sign);
extern char * gcvt(double __value, int __ndigit, char * __buf);
extern char * qecvt(long double __value, int __ndigit, int * __decpt, int * __sign);
extern char * qfcvt(long double __value, int __ndigit, int * __decpt, int * __sign);
extern char * qgcvt(long double __value, int __ndigit, char * __buf);
extern int ecvt_r(double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, long unsigned int __len);
extern int fcvt_r(double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, long unsigned int __len);
extern int qecvt_r(long double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, long unsigned int __len);
extern int qfcvt_r(long double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, long unsigned int __len);
extern int mblen(const char * __s, long unsigned int __n);
extern int mbtowc(int (* __pwc), const char * __s, long unsigned int __n);
extern int wctomb(char * __s, int __wchar);
extern long unsigned int mbstowcs(int (* __pwcs), const char * __s, long unsigned int __n);
extern long unsigned int wcstombs(char * __s, const int (* __pwcs), long unsigned int __n);
extern int rpmatch(const char * __response);
extern int getsubopt(char ** __optionp, char *const * __tokens, char ** __valuep);
extern int getloadavg(double __loadavg[], int __nelem);
# 4 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
struct _IO_FILE;

/* (l5) typedef struct _IO_FILE  __FILE; */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
# 4 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
struct _IO_FILE;

/* (l7) typedef struct _IO_FILE  FILE; */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
struct _noname15_ {
    int __count;
    union {
        unsigned int __wch;
        char __wchb[ 4];
      } __value;
  };

/* (l21) typedef struct _noname15_  __mbstate_t; */
# 21 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
struct _noname16_ {
    long int __pos;
    struct _noname15_ __state;
  };

/* (l30) typedef struct _noname16_  _G_fpos_t; */
# 30 "/usr/include/x86_64-linux-gnu/bits/_G_config.h"
struct _noname17_ {
    long int __pos;
    struct _noname15_ __state;
  };

/* (l35) typedef struct _noname17_  _G_fpos64_t; */
# 35 "/usr/include/x86_64-linux-gnu/bits/_G_config.h"
/* (l40) typedef __builtin_va_list __gnuc_va_list; */
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h"
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h"
struct _IO_jump_t;
struct _IO_FILE;

/* (l154) typedef void _IO_lock_t; */
# 154 "/usr/include/x86_64-linux-gnu/bits/libio.h"
struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
  };
enum __codecvt_result {
    __codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv
  };
struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[ 1];
    void (* _lock);
    long int _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    long unsigned int __pad5;
    int _mode;
    char _unused2[ 15 * sizeof(int) - 4 * sizeof(void *) - sizeof(long unsigned int )];
  };

/* (l314) typedef struct _IO_FILE  _IO_FILE; */
# 314 "/usr/include/x86_64-linux-gnu/bits/libio.h"
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;

/* (l337) typedef __ssize_t __io_read_fn(void * __cookie, char * __buf, size_t __nbytes); */
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h"
/* (l346) typedef __ssize_t __io_write_fn(void * __cookie, const char * __buf, size_t __n); */
# 346 "/usr/include/x86_64-linux-gnu/bits/libio.h"
/* (l354) typedef int __io_seek_fn(void * __cookie, __off64_t * __pos, int __w); */
# 354 "/usr/include/x86_64-linux-gnu/bits/libio.h"
/* (l357) typedef int __io_close_fn(void * __cookie); */
# 357 "/usr/include/x86_64-linux-gnu/bits/libio.h"
extern int __underflow(struct _IO_FILE (*));
extern int __uflow(struct _IO_FILE (*));
extern int __overflow(struct _IO_FILE (*), int);
extern int _IO_getc(struct _IO_FILE (* __fp));
extern int _IO_putc(int __c, struct _IO_FILE (* __fp));
extern int _IO_feof(struct _IO_FILE (* __fp));
extern int _IO_ferror(struct _IO_FILE (* __fp));
extern int _IO_peekc_locked(struct _IO_FILE (* __fp));
extern void _IO_flockfile(struct _IO_FILE (*));
extern void _IO_funlockfile(struct _IO_FILE (*));
extern int _IO_ftrylockfile(struct _IO_FILE (*));
extern int _IO_vfscanf(struct _IO_FILE (*), const char *, __builtin_va_list , int *);
extern int _IO_vfprintf(struct _IO_FILE (*), const char *, __builtin_va_list );
extern long int _IO_padn(struct _IO_FILE (*), int, long int );
extern long unsigned int _IO_sgetn(struct _IO_FILE (*), void *, long unsigned int );
extern long int _IO_seekoff(struct _IO_FILE (*), long int , int, int);
extern long int _IO_seekpos(struct _IO_FILE (*), long int , int);
extern void _IO_free_backup_area(struct _IO_FILE (*));

/* (l99) typedef __gnuc_va_list va_list; */
# 99 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h"
/* (l78) typedef _G_fpos_t fpos_t; */
# 78 "/usr/include/stdio.h"
# 135 "/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
extern struct _IO_FILE * stdout;
extern struct _IO_FILE * stderr;
extern int remove(const char * __filename);
extern int rename(const char * __old, const char * __new);
extern int renameat(int __oldfd, const char * __old, int __newfd, const char * __new);
extern struct _IO_FILE (* tmpfile(void));
extern char * tmpnam(char * __s);
extern char * tmpnam_r(char * __s);
extern char * tempnam(const char * __dir, const char * __pfx);
extern int fclose(struct _IO_FILE (* __stream));
extern int fflush(struct _IO_FILE (* __stream));
extern int fflush_unlocked(struct _IO_FILE (* __stream));
extern struct _IO_FILE (* fopen(const char * __filename, const char * __modes));
extern struct _IO_FILE (* freopen(const char * __filename, const char * __modes, struct _IO_FILE (* __stream)));
extern struct _IO_FILE (* fdopen(int __fd, const char * __modes));
extern struct _IO_FILE (* fmemopen(void * __s, long unsigned int __len, const char * __modes));
extern struct _IO_FILE (* open_memstream(char ** __bufloc, long unsigned int (* __sizeloc)));
extern void setbuf(struct _IO_FILE (* __stream), char * __buf);
extern int setvbuf(struct _IO_FILE (* __stream), char * __buf, int __modes, long unsigned int __n);
extern void setbuffer(struct _IO_FILE (* __stream), char * __buf, long unsigned int __size);
extern void setlinebuf(struct _IO_FILE (* __stream));
extern int fprintf(struct _IO_FILE (* __stream), const char * __format, ...);
extern int printf(const char * __format, ...);
extern int sprintf(char * __s, const char * __format, ...);
extern int vfprintf(struct _IO_FILE (* __s), const char * __format, __builtin_va_list __arg);
extern int vprintf(const char * __format, __builtin_va_list __arg);
extern int vsprintf(char * __s, const char * __format, __builtin_va_list __arg);
extern int snprintf(char * __s, long unsigned int __maxlen, const char * __format, ...);
extern int vsnprintf(char * __s, long unsigned int __maxlen, const char * __format, __builtin_va_list __arg);
extern int vdprintf(int __fd, const char * __fmt, __builtin_va_list __arg);
extern int dprintf(int __fd, const char * __fmt, ...);
extern int fscanf(struct _IO_FILE (* __stream), const char * __format, ...);
extern int scanf(const char * __format, ...);
extern int sscanf(const char * __s, const char * __format, ...);
extern int __isoc99_fscanf(struct _IO_FILE (* __stream), const char * __format, ...);
extern int __isoc99_scanf(const char * __format, ...);
extern int __isoc99_sscanf(const char * __s, const char * __format, ...);
extern int vfscanf(struct _IO_FILE (* __s), const char * __format, __builtin_va_list __arg);
extern int vscanf(const char * __format, __builtin_va_list __arg);
extern int vsscanf(const char * __s, const char * __format, __builtin_va_list __arg);
extern int __isoc99_vfscanf(struct _IO_FILE (* __s), const char * __format, __builtin_va_list __arg);
extern int __isoc99_vscanf(const char * __format, __builtin_va_list __arg);
extern int __isoc99_vsscanf(const char * __s, const char * __format, __builtin_va_list __arg);
extern int fgetc(struct _IO_FILE (* __stream));
extern int getc(struct _IO_FILE (* __stream));
extern int getchar(void);
extern int getc_unlocked(struct _IO_FILE (* __stream));
extern int getchar_unlocked(void);
extern int fgetc_unlocked(struct _IO_FILE (* __stream));
extern int fputc(int __c, struct _IO_FILE (* __stream));
extern int putc(int __c, struct _IO_FILE (* __stream));
extern int putchar(int __c);
extern int fputc_unlocked(int __c, struct _IO_FILE (* __stream));
extern int putc_unlocked(int __c, struct _IO_FILE (* __stream));
extern int putchar_unlocked(int __c);
extern int getw(struct _IO_FILE (* __stream));
extern int putw(int __w, struct _IO_FILE (* __stream));
extern char * fgets(char * __s, int __n, struct _IO_FILE (* __stream));
extern long int __getdelim(char ** __lineptr, long unsigned int (* __n), int __delimiter, struct _IO_FILE (* __stream));
extern long int getdelim(char ** __lineptr, long unsigned int (* __n), int __delimiter, struct _IO_FILE (* __stream));
extern long int getline(char ** __lineptr, long unsigned int (* __n), struct _IO_FILE (* __stream));
extern int fputs(const char * __s, struct _IO_FILE (* __stream));
extern int puts(const char * __s);
extern int ungetc(int __c, struct _IO_FILE (* __stream));
extern long unsigned int fread(void * __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (* __stream));
extern long unsigned int fwrite(const void * __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (* __s));
extern long unsigned int fread_unlocked(void * __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (* __stream));
extern long unsigned int fwrite_unlocked(const void * __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (* __stream));
extern int fseek(struct _IO_FILE (* __stream), long int __off, int __whence);
extern long int ftell(struct _IO_FILE (* __stream));
extern void rewind(struct _IO_FILE (* __stream));
extern int fseeko(struct _IO_FILE (* __stream), long int __off, int __whence);
extern long int ftello(struct _IO_FILE (* __stream));
extern int fgetpos(struct _IO_FILE (* __stream), struct _noname16_ (* __pos));
extern int fsetpos(struct _IO_FILE (* __stream), const struct _noname16_ (* __pos));
extern void clearerr(struct _IO_FILE (* __stream));
extern int feof(struct _IO_FILE (* __stream));
extern int ferror(struct _IO_FILE (* __stream));
extern void clearerr_unlocked(struct _IO_FILE (* __stream));
extern int feof_unlocked(struct _IO_FILE (* __stream));
extern int ferror_unlocked(struct _IO_FILE (* __stream));
extern void perror(const char * __s);
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern int sys_nerr;
extern const char *const sys_errlist[];
# 786 "/usr/include/stdio.h"
extern int fileno(struct _IO_FILE (* __stream));
extern int fileno_unlocked(struct _IO_FILE (* __stream));
extern struct _IO_FILE (* popen(const char * __command, const char * __modes));
extern int pclose(struct _IO_FILE (* __stream));
extern char * ctermid(char * __s);
extern void flockfile(struct _IO_FILE (* __stream));
extern int ftrylockfile(struct _IO_FILE (* __stream));
extern void funlockfile(struct _IO_FILE (* __stream));
# 43 "/usr/include/string.h"
extern void * memcpy(void * __dest, const void * __src, long unsigned int __n);
extern void * memmove(void * __dest, const void * __src, long unsigned int __n);
extern void * memccpy(void * __dest, const void * __src, int __c, long unsigned int __n);
extern void * memset(void * __s, int __c, long unsigned int __n);
extern int memcmp(const void * __s1, const void * __s2, long unsigned int __n);
extern void * memchr(const void * __s, int __c, long unsigned int __n);
extern char * strcpy(char * __dest, const char * __src);
extern char * strncpy(char * __dest, const char * __src, long unsigned int __n);
extern char * strcat(char * __dest, const char * __src);
extern char * strncat(char * __dest, const char * __src, long unsigned int __n);
extern int strcmp(const char * __s1, const char * __s2);
extern int strncmp(const char * __s1, const char * __s2, long unsigned int __n);
extern int strcoll(const char * __s1, const char * __s2);
extern long unsigned int strxfrm(char * __dest, const char * __src, long unsigned int __n);
# 40 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h"
struct __locale_struct {
    struct __locale_data * __locales[ 13];
    const unsigned short int * __ctype_b;
    const int * __ctype_tolower;
    const int * __ctype_toupper;
    const char * __names[ 13];
  };

/* (l42) typedef struct __locale_struct  * __locale_t; */
# 42 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h"
/* (l24) typedef __locale_t locale_t; */
# 24 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h"
# 156 "/usr/include/string.h"
extern int strcoll_l(const char * __s1, const char * __s2, struct __locale_struct * __l);
extern long unsigned int strxfrm_l(char * __dest, const char * __src, long unsigned int __n, struct __locale_struct * __l);
extern char * strdup(const char * __s);
extern char * strndup(const char * __string, long unsigned int __n);
extern char * strchr(const char * __s, int __c);
extern char * strrchr(const char * __s, int __c);
extern long unsigned int strcspn(const char * __s, const char * __reject);
extern long unsigned int strspn(const char * __s, const char * __accept);
extern char * strpbrk(const char * __s, const char * __accept);
extern char * strstr(const char * __haystack, const char * __needle);
extern char * strtok(char * __s, const char * __delim);
extern char * __strtok_r(char * __s, const char * __delim, char ** __save_ptr);
extern char * strtok_r(char * __s, const char * __delim, char ** __save_ptr);
extern long unsigned int strlen(const char * __s);
extern long unsigned int strnlen(const char * __string, long unsigned int __maxlen);
extern char * strerror(int __errnum);
extern int __xpg_strerror_r(int __errnum, char * __buf, long unsigned int __buflen);
extern char * strerror_l(int __errnum, struct __locale_struct * __l);
# 35 "/usr/include/strings.h"
extern int bcmp(const void * __s1, const void * __s2, long unsigned int __n);
extern void bcopy(const void * __src, void * __dest, long unsigned int __n);
extern void bzero(void * __s, long unsigned int __n);
extern char * index(const char * __s, int __c);
extern char * rindex(const char * __s, int __c);
extern int ffs(int __i);
extern int ffsl(long int __l);
extern int ffsll(long long int __ll);
extern int strcasecmp(const char * __s1, const char * __s2);
extern int strncasecmp(const char * __s1, const char * __s2, long unsigned int __n);
extern int strcasecmp_l(const char * __s1, const char * __s2, struct __locale_struct * __loc);
extern int strncasecmp_l(const char * __s1, const char * __s2, long unsigned int __n, struct __locale_struct * __loc);
# 435 "/usr/include/string.h"
extern void explicit_bzero(void * __s, long unsigned int __n);
extern char * strsep(char ** __stringp, const char * __delim);
extern char * strsignal(int __sig);
extern char * __stpcpy(char * __dest, const char * __src);
extern char * stpcpy(char * __dest, const char * __src);
extern char * __stpncpy(char * __dest, const char * __src, long unsigned int __n);
extern char * stpncpy(char * __dest, const char * __src, long unsigned int __n);
# 27 "bots.h"
extern int bots_sequential_flag;
extern int bots_benchmark_flag;
extern int bots_check_flag;
extern int bots_result;
extern int bots_output_format;
extern int bots_print_header;
extern char bots_name[];
extern char bots_parameters[];
extern char bots_model[];
extern char bots_resources[];
extern char bots_exec_date[];
extern char bots_exec_message[];
extern char bots_comp_date[];
extern char bots_comp_message[];
extern char bots_cc[];
extern char bots_cflags[];
extern char bots_ld[];
extern char bots_ldflags[];
extern double bots_time_program;
extern double bots_time_sequential;
extern unsigned long long bots_number_of_tasks;
extern char bots_cutoff[];
extern int bots_cutoff_value;
extern int bots_app_cutoff_value;
extern int bots_app_cutoff_value_1;
extern int bots_app_cutoff_value_2;
extern int bots_arg_size;
extern int bots_arg_size_1;
extern int bots_arg_size_2;
long bots_usecs();
void bots_error(int error, char * message);
void bots_warning(int warning, char * message);
enum _noname18_ {
    BOTS_VERBOSE_NONE = 0, BOTS_VERBOSE_DEFAULT, BOTS_VERBOSE_DEBUG
  };

/* (l78) typedef enum _noname18_  bots_verbose_mode_t; */
# 78 "bots.h"
# 80 "bots.h"
extern enum _noname18_ bots_verbose_mode;
# 36 "/usr/local/include/ompi/omp.h"
int omp_in_parallel(void);
int omp_get_thread_num(void);
void omp_set_num_threads(int num_threads);
int omp_get_num_threads(void);
int omp_get_max_threads(void);
int omp_get_num_procs(void);
void omp_set_dynamic(int dynamic_threads);
int omp_get_dynamic(void);
void omp_set_nested(int nested);
int omp_get_nested(void);
enum omp_sched_t {
    omp_sched_static = 1, omp_sched_dynamic = 2, omp_sched_guided = 3, omp_sched_auto = 4
  };

/* (l54) typedef enum omp_sched_t  omp_sched_t; */
# 54 "/usr/local/include/ompi/omp.h"
enum omp_proc_bind_t {
    omp_proc_bind_false = 0, omp_proc_bind_true = 1, omp_proc_bind_master = 2, omp_proc_bind_close = 3, omp_proc_bind_spread = 4
  };

/* (l64) typedef enum omp_proc_bind_t  omp_proc_bind_t; */
# 64 "/usr/local/include/ompi/omp.h"
/* (l67) typedef void * omp_lock_t; */
# 67 "/usr/local/include/ompi/omp.h"
# 69 "/usr/local/include/ompi/omp.h"
void omp_init_lock(void * (* lock));
void omp_destroy_lock(void * (* lock));
void omp_set_lock(void * (* lock));
void omp_unset_lock(void * (* lock));
int omp_test_lock(void * (* lock));

/* (l76) typedef void * omp_nest_lock_t; */
# 76 "/usr/local/include/ompi/omp.h"
void omp_init_nest_lock(void * (* lock));
void omp_destroy_nest_lock(void * (* lock));
void omp_set_nest_lock(void * (* lock));
void omp_unset_nest_lock(void * (* lock));
int omp_test_nest_lock(void * (* lock));
double omp_get_wtime(void);
double omp_get_wtick(void);
void omp_set_schedule(enum omp_sched_t kind, int chunk);
void omp_get_schedule(enum omp_sched_t (* kind), int * chunk);
int omp_get_thread_limit(void);
void omp_set_max_active_levels(int levels);
int omp_get_max_active_levels(void);
int omp_get_level(void);
int omp_get_ancestor_thread_num(int level);
int omp_get_team_size(int level);
int omp_get_active_level(void);
int omp_in_final(void);
int omp_get_cancellation(void);
enum omp_proc_bind_t omp_get_proc_bind(void);
int omp_get_num_teams(void);
int omp_get_team_num(void);
int omp_is_initial_device(void);
void omp_set_default_device(int device_num);
int omp_get_default_device(void);
int omp_get_num_devices(void);
# 31 "app-desc.h"
int ok(int n, char * a);
void nqueens(int n, int j, char * a, int * solutions, int depth);
void nqueens_ser(int n, int j, char * a, int * solutions);
int verify_queens(int);
void find_queens(int);
# 54 "nqueens.c"
static int solutions[] = {
    1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596
  };
int total_count;


int ok(int n, char * a)
{
  int i, j;
  char p, q;

  for (i = 0; i < n; i++)
    {
      p = a[i];
      for (j = i + 1; j < n; j++)
        {
          q = a[j];
          if (q == p || q == p - (j - i) || q == p + (j - i))
            return (0);
        }
    }
  return (1);
}


void nqueens_ser(int n, int j, char * a, int * solutions)
{
  int res;
  int i;

  if (n == j)
    {
      *solutions = 1;
      return;
    }
  *solutions = 0;
  for (i = 0; i < n; i++)
    {
      {
        a[j] = (char) i;
        if (ok(j + 1, a))
          {
            nqueens_ser(n, j + 1, a, &res);
            *solutions += res;
          }
      }
    }
}

static void * _taskFunc0_(void *);


void nqueens(int n, int j, char * a, int * solutions, int depth)
{
  int * csols;
  int i;

  if (n == j)
    {
      *solutions = 1;
      return;
    }
  *solutions = 0;
  csols = alloca(n * sizeof(int));
  memset(csols, 0, n * sizeof(int));
  for (i = 0; i < n; i++)
    {
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_n = n, n = _fip_n;
          char * _fip_a = a, * a = _fip_a;
          int _fip_j = j, j = _fip_j;
          int _fip_i = i, i = _fip_i;
          int * _fip_csols = csols, * csols = _fip_csols;
          int _fip_depth = depth, depth = _fip_depth;

          _itn = ort_task_immediate_start(0);
          # 352 "nqueens.c"
          {
            char * b = alloca(n * sizeof(char));

            memcpy(b, a, j * sizeof(char));
            b[j] = (char) i;
            if (ok(j + 1, b))
              nqueens(n, j + 1, b, &csols[i], depth);
            CANCEL_task_350 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        /* (l350) #pragma omp task untied */
        {
          struct __taskenv__ {
              int n;
              char * a;
              int j;
              int i;
              int * csols;
              int depth;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc0_);
          /* byvalue variables */
          _tenv->n = n;
          _tenv->a = a;
          _tenv->j = j;
          _tenv->i = i;
          _tenv->csols = csols;
          _tenv->depth = depth;
          ort_new_task(_taskFunc0_, (void *) _tenv, 0, 1);
        }
    }
  /* (l365) #pragma omp taskwait  */
  # 365 "nqueens.c"
  ort_taskwait(0);
  # 367 "nqueens.c"
  for (i = 0; i < n; i++)
    *solutions += csols[i];
}

/* Outlined code for (l350) #pragma omp task untied */

static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      int n;
      char * a;
      int j;
      int i;
      int * csols;
      int depth;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int n = _tenv->n;
  char * a = _tenv->a;
  int j = _tenv->j;
  int i = _tenv->i;
  int * csols = _tenv->csols;
  int depth = _tenv->depth;

  /* byresult variables */
  /* (l350) #pragma omp task untied -- body moved below */
  # 350 "nqueens.c"
  # 352 "nqueens.c"
  {
    char * b = alloca(n * sizeof(char));

    memcpy(b, a, j * sizeof(char));
    b[j] = (char) i;
    if (ok(j + 1, b))
      nqueens(n, j + 1, b, &csols[i], depth);
    CANCEL_task_350 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}

static void * _thrFunc0_(void *);


void find_queens(int size)
# 374 "nqueens.c"
{
  total_count = 0;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Computing N-Queens algorithm (n=%d) ", size);
      }
  }
  ;
  /* (l378) #pragma omp parallel  */
  {
    struct __shvt__ {
        int (* size);
      } _shvars;

    /* byref variables */
    _shvars.size = &size;
    ort_execute_parallel(_thrFunc0_, (void *) &_shvars, -1, 0, 1);
  }
  # 395 "nqueens.c"
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, " completed!\n");
      }
  }
  ;
}

/* Outlined code for (l378) #pragma omp parallel  */

static void * _thrFunc0_(void * __arg)
{
  struct __shvt__ {
      int (* size);
    };
  struct __shvt__ * _shvars = (struct __shvt__ *) __arg;

  /* byref variables */
  int (* size) = _shvars->size;

  /* byresult variables */
  /* (l378) #pragma omp parallel  -- body moved below */
  # 378 "nqueens.c"
  # 379 "nqueens.c"
  {
    /* (l380) #pragma omp single  */
    # 380 "nqueens.c"
    if (ort_mysingle(1))
      # 381 "nqueens.c"
      {
        char * a;

        a = alloca((*size) * sizeof(char));
        nqueens((*size), 0, a, &total_count, 0);
      }
    ort_leaving_single();
  }
  CANCEL_parallel_378 :
    ort_taskwait(2);
  return ((void *) 0);
}


int verify_queens(int size)
# 401 "nqueens.c"
{
  if (size > sizeof((solutions)) / sizeof(int))
    return (0);
  if (total_count == solutions[size - 1])
    return (1);
  return (2);
}

