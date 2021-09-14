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

/* (l149) typedef float float_t; */
# 149 "/usr/include/math.h"
/* (l150) typedef double double_t; */
# 150 "/usr/include/math.h"
# 22 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h"
extern int __fpclassify(double __value);
extern int __signbit(double __value);
extern int __isinf(double __value);
extern int __finite(double __value);
extern int __isnan(double __value);
extern int __iseqsig(double __x, double __y);
extern int __issignaling(double __value);
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double acos(double __x);
extern double __acos(double __x);
extern double asin(double __x);
extern double __asin(double __x);
extern double atan(double __x);
extern double __atan(double __x);
extern double atan2(double __y, double __x);
extern double __atan2(double __y, double __x);
extern double cos(double __x);
extern double __cos(double __x);
extern double sin(double __x);
extern double __sin(double __x);
extern double tan(double __x);
extern double __tan(double __x);
extern double cosh(double __x);
extern double __cosh(double __x);
extern double sinh(double __x);
extern double __sinh(double __x);
extern double tanh(double __x);
extern double __tanh(double __x);
extern double acosh(double __x);
extern double __acosh(double __x);
extern double asinh(double __x);
extern double __asinh(double __x);
extern double atanh(double __x);
extern double __atanh(double __x);
extern double exp(double __x);
extern double __exp(double __x);
extern double frexp(double __x, int * __exponent);
extern double __frexp(double __x, int * __exponent);
extern double ldexp(double __x, int __exponent);
extern double __ldexp(double __x, int __exponent);
extern double log(double __x);
extern double __log(double __x);
extern double log10(double __x);
extern double __log10(double __x);
extern double modf(double __x, double * __iptr);
extern double __modf(double __x, double * __iptr);
extern double expm1(double __x);
extern double __expm1(double __x);
extern double log1p(double __x);
extern double __log1p(double __x);
extern double logb(double __x);
extern double __logb(double __x);
extern double exp2(double __x);
extern double __exp2(double __x);
extern double log2(double __x);
extern double __log2(double __x);
extern double pow(double __x, double __y);
extern double __pow(double __x, double __y);
extern double sqrt(double __x);
extern double __sqrt(double __x);
extern double hypot(double __x, double __y);
extern double __hypot(double __x, double __y);
extern double cbrt(double __x);
extern double __cbrt(double __x);
extern double ceil(double __x);
extern double __ceil(double __x);
extern double fabs(double __x);
extern double __fabs(double __x);
extern double floor(double __x);
extern double __floor(double __x);
extern double fmod(double __x, double __y);
extern double __fmod(double __x, double __y);
extern int isinf(double __value);
extern int finite(double __value);
extern double drem(double __x, double __y);
extern double __drem(double __x, double __y);
extern double significand(double __x);
extern double __significand(double __x);
extern double copysign(double __x, double __y);
extern double __copysign(double __x, double __y);
extern double nan(const char * __tagb);
extern double __nan(const char * __tagb);
extern int isnan(double __value);
extern double j0(double);
extern double __j0(double);
extern double j1(double);
extern double __j1(double);
extern double jn(int, double);
extern double __jn(int, double);
extern double y0(double);
extern double __y0(double);
extern double y1(double);
extern double __y1(double);
extern double yn(int, double);
extern double __yn(int, double);
extern double erf(double);
extern double __erf(double);
extern double erfc(double);
extern double __erfc(double);
extern double lgamma(double);
extern double __lgamma(double);
extern double tgamma(double);
extern double __tgamma(double);
extern double gamma(double);
extern double __gamma(double);
extern double lgamma_r(double, int * __signgamp);
extern double __lgamma_r(double, int * __signgamp);
extern double rint(double __x);
extern double __rint(double __x);
extern double nextafter(double __x, double __y);
extern double __nextafter(double __x, double __y);
extern double nexttoward(double __x, long double __y);
extern double __nexttoward(double __x, long double __y);
extern double remainder(double __x, double __y);
extern double __remainder(double __x, double __y);
extern double scalbn(double __x, int __n);
extern double __scalbn(double __x, int __n);
extern int ilogb(double __x);
extern int __ilogb(double __x);
extern double scalbln(double __x, long int __n);
extern double __scalbln(double __x, long int __n);
extern double nearbyint(double __x);
extern double __nearbyint(double __x);
extern double round(double __x);
extern double __round(double __x);
extern double trunc(double __x);
extern double __trunc(double __x);
extern double remquo(double __x, double __y, int * __quo);
extern double __remquo(double __x, double __y, int * __quo);
extern long int lrint(double __x);
extern long int __lrint(double __x);
extern long long int llrint(double __x);
extern long long int __llrint(double __x);
extern long int lround(double __x);
extern long int __lround(double __x);
extern long long int llround(double __x);
extern long long int __llround(double __x);
extern double fdim(double __x, double __y);
extern double __fdim(double __x, double __y);
extern double fmax(double __x, double __y);
extern double __fmax(double __x, double __y);
extern double fmin(double __x, double __y);
extern double __fmin(double __x, double __y);
extern double fma(double __x, double __y, double __z);
extern double __fma(double __x, double __y, double __z);
extern double scalb(double __x, double __n);
extern double __scalb(double __x, double __n);
# 22 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h"
extern int __fpclassifyf(float __value);
extern int __signbitf(float __value);
extern int __isinff(float __value);
extern int __finitef(float __value);
extern int __isnanf(float __value);
extern int __iseqsigf(float __x, float __y);
extern int __issignalingf(float __value);
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float acosf(float __x);
extern float __acosf(float __x);
extern float asinf(float __x);
extern float __asinf(float __x);
extern float atanf(float __x);
extern float __atanf(float __x);
extern float atan2f(float __y, float __x);
extern float __atan2f(float __y, float __x);
extern float cosf(float __x);
extern float __cosf(float __x);
extern float sinf(float __x);
extern float __sinf(float __x);
extern float tanf(float __x);
extern float __tanf(float __x);
extern float coshf(float __x);
extern float __coshf(float __x);
extern float sinhf(float __x);
extern float __sinhf(float __x);
extern float tanhf(float __x);
extern float __tanhf(float __x);
extern float acoshf(float __x);
extern float __acoshf(float __x);
extern float asinhf(float __x);
extern float __asinhf(float __x);
extern float atanhf(float __x);
extern float __atanhf(float __x);
extern float expf(float __x);
extern float __expf(float __x);
extern float frexpf(float __x, int * __exponent);
extern float __frexpf(float __x, int * __exponent);
extern float ldexpf(float __x, int __exponent);
extern float __ldexpf(float __x, int __exponent);
extern float logf(float __x);
extern float __logf(float __x);
extern float log10f(float __x);
extern float __log10f(float __x);
extern float modff(float __x, float * __iptr);
extern float __modff(float __x, float * __iptr);
extern float expm1f(float __x);
extern float __expm1f(float __x);
extern float log1pf(float __x);
extern float __log1pf(float __x);
extern float logbf(float __x);
extern float __logbf(float __x);
extern float exp2f(float __x);
extern float __exp2f(float __x);
extern float log2f(float __x);
extern float __log2f(float __x);
extern float powf(float __x, float __y);
extern float __powf(float __x, float __y);
extern float sqrtf(float __x);
extern float __sqrtf(float __x);
extern float hypotf(float __x, float __y);
extern float __hypotf(float __x, float __y);
extern float cbrtf(float __x);
extern float __cbrtf(float __x);
extern float ceilf(float __x);
extern float __ceilf(float __x);
extern float fabsf(float __x);
extern float __fabsf(float __x);
extern float floorf(float __x);
extern float __floorf(float __x);
extern float fmodf(float __x, float __y);
extern float __fmodf(float __x, float __y);
extern int isinff(float __value);
extern int finitef(float __value);
extern float dremf(float __x, float __y);
extern float __dremf(float __x, float __y);
extern float significandf(float __x);
extern float __significandf(float __x);
extern float copysignf(float __x, float __y);
extern float __copysignf(float __x, float __y);
extern float nanf(const char * __tagb);
extern float __nanf(const char * __tagb);
extern int isnanf(float __value);
extern float j0f(float);
extern float __j0f(float);
extern float j1f(float);
extern float __j1f(float);
extern float jnf(int, float);
extern float __jnf(int, float);
extern float y0f(float);
extern float __y0f(float);
extern float y1f(float);
extern float __y1f(float);
extern float ynf(int, float);
extern float __ynf(int, float);
extern float erff(float);
extern float __erff(float);
extern float erfcf(float);
extern float __erfcf(float);
extern float lgammaf(float);
extern float __lgammaf(float);
extern float tgammaf(float);
extern float __tgammaf(float);
extern float gammaf(float);
extern float __gammaf(float);
extern float lgammaf_r(float, int * __signgamp);
extern float __lgammaf_r(float, int * __signgamp);
extern float rintf(float __x);
extern float __rintf(float __x);
extern float nextafterf(float __x, float __y);
extern float __nextafterf(float __x, float __y);
extern float nexttowardf(float __x, long double __y);
extern float __nexttowardf(float __x, long double __y);
extern float remainderf(float __x, float __y);
extern float __remainderf(float __x, float __y);
extern float scalbnf(float __x, int __n);
extern float __scalbnf(float __x, int __n);
extern int ilogbf(float __x);
extern int __ilogbf(float __x);
extern float scalblnf(float __x, long int __n);
extern float __scalblnf(float __x, long int __n);
extern float nearbyintf(float __x);
extern float __nearbyintf(float __x);
extern float roundf(float __x);
extern float __roundf(float __x);
extern float truncf(float __x);
extern float __truncf(float __x);
extern float remquof(float __x, float __y, int * __quo);
extern float __remquof(float __x, float __y, int * __quo);
extern long int lrintf(float __x);
extern long int __lrintf(float __x);
extern long long int llrintf(float __x);
extern long long int __llrintf(float __x);
extern long int lroundf(float __x);
extern long int __lroundf(float __x);
extern long long int llroundf(float __x);
extern long long int __llroundf(float __x);
extern float fdimf(float __x, float __y);
extern float __fdimf(float __x, float __y);
extern float fmaxf(float __x, float __y);
extern float __fmaxf(float __x, float __y);
extern float fminf(float __x, float __y);
extern float __fminf(float __x, float __y);
extern float fmaf(float __x, float __y, float __z);
extern float __fmaf(float __x, float __y, float __z);
extern float scalbf(float __x, float __n);
extern float __scalbf(float __x, float __n);
# 22 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h"
extern int __fpclassifyl(long double __value);
extern int __signbitl(long double __value);
extern int __isinfl(long double __value);
extern int __finitel(long double __value);
extern int __isnanl(long double __value);
extern int __iseqsigl(long double __x, long double __y);
extern int __issignalingl(long double __value);
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double acosl(long double __x);
extern long double __acosl(long double __x);
extern long double asinl(long double __x);
extern long double __asinl(long double __x);
extern long double atanl(long double __x);
extern long double __atanl(long double __x);
extern long double atan2l(long double __y, long double __x);
extern long double __atan2l(long double __y, long double __x);
extern long double cosl(long double __x);
extern long double __cosl(long double __x);
extern long double sinl(long double __x);
extern long double __sinl(long double __x);
extern long double tanl(long double __x);
extern long double __tanl(long double __x);
extern long double coshl(long double __x);
extern long double __coshl(long double __x);
extern long double sinhl(long double __x);
extern long double __sinhl(long double __x);
extern long double tanhl(long double __x);
extern long double __tanhl(long double __x);
extern long double acoshl(long double __x);
extern long double __acoshl(long double __x);
extern long double asinhl(long double __x);
extern long double __asinhl(long double __x);
extern long double atanhl(long double __x);
extern long double __atanhl(long double __x);
extern long double expl(long double __x);
extern long double __expl(long double __x);
extern long double frexpl(long double __x, int * __exponent);
extern long double __frexpl(long double __x, int * __exponent);
extern long double ldexpl(long double __x, int __exponent);
extern long double __ldexpl(long double __x, int __exponent);
extern long double logl(long double __x);
extern long double __logl(long double __x);
extern long double log10l(long double __x);
extern long double __log10l(long double __x);
extern long double modfl(long double __x, long double * __iptr);
extern long double __modfl(long double __x, long double * __iptr);
extern long double expm1l(long double __x);
extern long double __expm1l(long double __x);
extern long double log1pl(long double __x);
extern long double __log1pl(long double __x);
extern long double logbl(long double __x);
extern long double __logbl(long double __x);
extern long double exp2l(long double __x);
extern long double __exp2l(long double __x);
extern long double log2l(long double __x);
extern long double __log2l(long double __x);
extern long double powl(long double __x, long double __y);
extern long double __powl(long double __x, long double __y);
extern long double sqrtl(long double __x);
extern long double __sqrtl(long double __x);
extern long double hypotl(long double __x, long double __y);
extern long double __hypotl(long double __x, long double __y);
extern long double cbrtl(long double __x);
extern long double __cbrtl(long double __x);
extern long double ceill(long double __x);
extern long double __ceill(long double __x);
extern long double fabsl(long double __x);
extern long double __fabsl(long double __x);
extern long double floorl(long double __x);
extern long double __floorl(long double __x);
extern long double fmodl(long double __x, long double __y);
extern long double __fmodl(long double __x, long double __y);
extern int isinfl(long double __value);
extern int finitel(long double __value);
extern long double dreml(long double __x, long double __y);
extern long double __dreml(long double __x, long double __y);
extern long double significandl(long double __x);
extern long double __significandl(long double __x);
extern long double copysignl(long double __x, long double __y);
extern long double __copysignl(long double __x, long double __y);
extern long double nanl(const char * __tagb);
extern long double __nanl(const char * __tagb);
extern int isnanl(long double __value);
extern long double j0l(long double);
extern long double __j0l(long double);
extern long double j1l(long double);
extern long double __j1l(long double);
extern long double jnl(int, long double);
extern long double __jnl(int, long double);
extern long double y0l(long double);
extern long double __y0l(long double);
extern long double y1l(long double);
extern long double __y1l(long double);
extern long double ynl(int, long double);
extern long double __ynl(int, long double);
extern long double erfl(long double);
extern long double __erfl(long double);
extern long double erfcl(long double);
extern long double __erfcl(long double);
extern long double lgammal(long double);
extern long double __lgammal(long double);
extern long double tgammal(long double);
extern long double __tgammal(long double);
extern long double gammal(long double);
extern long double __gammal(long double);
extern long double lgammal_r(long double, int * __signgamp);
extern long double __lgammal_r(long double, int * __signgamp);
extern long double rintl(long double __x);
extern long double __rintl(long double __x);
extern long double nextafterl(long double __x, long double __y);
extern long double __nextafterl(long double __x, long double __y);
extern long double nexttowardl(long double __x, long double __y);
extern long double __nexttowardl(long double __x, long double __y);
extern long double remainderl(long double __x, long double __y);
extern long double __remainderl(long double __x, long double __y);
extern long double scalbnl(long double __x, int __n);
extern long double __scalbnl(long double __x, int __n);
extern int ilogbl(long double __x);
extern int __ilogbl(long double __x);
extern long double scalblnl(long double __x, long int __n);
extern long double __scalblnl(long double __x, long int __n);
extern long double nearbyintl(long double __x);
extern long double __nearbyintl(long double __x);
extern long double roundl(long double __x);
extern long double __roundl(long double __x);
extern long double truncl(long double __x);
extern long double __truncl(long double __x);
extern long double remquol(long double __x, long double __y, int * __quo);
extern long double __remquol(long double __x, long double __y, int * __quo);
extern long int lrintl(long double __x);
extern long int __lrintl(long double __x);
extern long long int llrintl(long double __x);
extern long long int __llrintl(long double __x);
extern long int lroundl(long double __x);
extern long int __lroundl(long double __x);
extern long long int llroundl(long double __x);
extern long long int __llroundl(long double __x);
extern long double fdiml(long double __x, long double __y);
extern long double __fdiml(long double __x, long double __y);
extern long double fmaxl(long double __x, long double __y);
extern long double __fmaxl(long double __x, long double __y);
extern long double fminl(long double __x, long double __y);
extern long double __fminl(long double __x, long double __y);
extern long double fmal(long double __x, long double __y, long double __z);
extern long double __fmal(long double __x, long double __y, long double __z);
extern long double scalbl(long double __x, long double __n);
extern long double __scalbl(long double __x, long double __n);
# 489 "/usr/include/math.h"
extern int signgam;
enum {
    FP_NAN = 0, FP_INFINITE = 1, FP_ZERO = 2, FP_SUBNORMAL = 3, FP_NORMAL = 4
  };
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
# 56 "/usr/include/x86_64-linux-gnu/sys/time.h"
struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
  };

/* (l58) typedef struct timezone  * __timezone_ptr_t; */
# 58 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int gettimeofday(struct timeval * __tv, struct timezone * __tz);
extern int settimeofday(const struct timeval * __tv, const struct timezone * __tz);
extern int adjtime(const struct timeval * __delta, struct timeval * __olddelta);
enum __itimer_which {
    ITIMER_REAL = 0, ITIMER_VIRTUAL = 1, ITIMER_PROF = 2
  };
struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
  };

/* (l117) typedef int __itimer_which_t; */
# 117 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int getitimer(int __which, struct itimerval * __value);
extern int setitimer(int __which, const struct itimerval * __new, struct itimerval * __old);
extern int utimes(const char * __file, const struct timeval __tvp[ 2]);
extern int lutimes(const char * __file, const struct timeval __tvp[ 2]);
extern int futimes(int __fd, const struct timeval __tvp[ 2]);

/* (l75) typedef unsigned char uint_8t; */
# 75 "brg_types.h"
/* (l84) typedef unsigned short uint_16t; */
# 84 "brg_types.h"
/* (l94) typedef unsigned int uint_32t; */
# 94 "brg_types.h"
/* (l128) typedef unsigned long uint_64t; */
# 128 "brg_types.h"
/* (l58) typedef u_int8_t RNG_state; */
# 58 "brg_sha1.h"
/* (l59) typedef u_int32_t uint32; */
# 59 "brg_sha1.h"
# 67 "brg_sha1.h"
struct state_t {
    unsigned char (state[ 20]);
  };
void rng_init(unsigned char (* state), int seed);
void rng_spawn(unsigned char (* mystate), unsigned char (* newstate), int spawnNumber);
int rng_rand(unsigned char (* mystate));
int rng_nextrand(unsigned char (* mystate));
char * rng_showstate(unsigned char (* state), char * s);
void rng_showtype(void);
struct sha1_ctx_s {
    unsigned int (count[ 2]);
    unsigned int (hash[ 5]);
    unsigned int (wbuf[ 16]);
  };

/* (l89) typedef struct sha1_ctx_s  sha1_ctx; */
# 89 "brg_sha1.h"
void sha1_compile(struct sha1_ctx_s (ctx[ 1]));
void sha1_begin(struct sha1_ctx_s (ctx[ 1]));
void sha1_hash(const unsigned char data[], unsigned long len, struct sha1_ctx_s (ctx[ 1]));
void sha1_end(unsigned char hval[], struct sha1_ctx_s (ctx[ 1]));
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);
# 34 "uts.h"
struct node_t {
    int height;
    int numChildren;
    struct state_t state;
  };

/* (l36) typedef struct node_t  Node; */
# 36 "uts.h"
extern double b_0;
extern int rootId;
extern int nonLeafBF;
extern double nonLeafProb;
extern int computeGranularity;
extern int debug;
extern int verbose;
unsigned long long parTreeSearch(int depth, struct node_t (* parent), int numChildren);
int uts_paramsToStr(char * strBuf, int ind);
void uts_read_file(char * file);
void uts_print_params();
double rng_toProb(int n);
void uts_initRoot(struct node_t (* root));
int uts_numChildren(struct node_t (* parent));
int uts_numChildren_bin(struct node_t (* parent));
int uts_numChildren_geo(struct node_t (* parent));
int uts_childType(struct node_t (* parent));
void uts_show_stats(void);
int uts_check_result(void);
# 37 "app-desc.h"
unsigned long long parallel_uts(struct node_t (*));
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
# 74 "uts.c"
unsigned long long nLeaves = 0;
int maxTreeDepth = 0;
double b_0 = 4.0;
int rootId = 0;
int nonLeafBF = 4;
double nonLeafProb = 15.0 / 64.0;
int computeGranularity = 1;
unsigned long long exp_tree_size = 0;
int exp_tree_depth = 0;
unsigned long long exp_num_leaves = 0;


double rng_toProb(int n)
{
  if (n < 0)
    {
      printf("*** toProb: rand n = %d out of range\n", n);
    }
  return (((n < 0) ? 0.0 : ((double) n) / 2147483648.0));
}


void uts_initRoot(struct node_t (* root))
{
  root->height = 0;
  root->numChildren = -1;
  rng_init(root->state.state, rootId);
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Root node at %p\n", root);
      }
  }
  ;
}


int uts_numChildren_bin(struct node_t (* parent))
{
  int v = rng_rand(parent->state.state);
  double d = rng_toProb(v);

  return ((d < nonLeafProb) ? nonLeafBF : 0);
}


int uts_numChildren(struct node_t (* parent))
{
  int numChildren = 0;

  if (parent->height == 0)
    numChildren = (int) floor(b_0);
  else
    numChildren = uts_numChildren_bin(parent);
  if (parent->height == 0)
    {
      int rootBF = (int) ceil(b_0);

      if (numChildren > rootBF)
        {
          ;
          numChildren = rootBF;
        }
    }
  else
    {
      if (numChildren > 100)
        {
          ;
          numChildren = 100;
        }
    }
  return (numChildren);
}

static void * _taskFunc0_(void *);
static void * _thrFunc0_(void *);


unsigned long long parallel_uts(struct node_t (* root))
{
  unsigned long long num_nodes = 0;

  root->numChildren = uts_numChildren(root);
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Computing Unbalance Tree Search algorithm ");
      }
  }
  ;
  /* (l180) #pragma omp parallel  */
  {
    struct __shvt__ {
        unsigned long long (* num_nodes);
        struct node_t (* (* root));
      } _shvars;

    /* byref variables */
    _shvars.num_nodes = &num_nodes;
    _shvars.root = &root;
    ort_execute_parallel(_thrFunc0_, (void *) &_shvars, -1, 0, 1);
  }
  # 184 "uts.c"
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, " completed!");
      }
  }
  ;
  return (num_nodes);
}

/* Outlined code for (l180) #pragma omp parallel  */

static void * _thrFunc0_(void * __arg)
{
  struct __shvt__ {
      unsigned long long (* num_nodes);
      struct node_t (* (* root));
    };
  struct __shvt__ * _shvars = (struct __shvt__ *) __arg;

  /* byref variables */
  unsigned long long (* num_nodes) = _shvars->num_nodes;
  struct node_t (* (* root)) = _shvars->root;

  /* byresult variables */
  /* (l180) #pragma omp parallel  -- body moved below */
  # 180 "uts.c"
  {
    /* (l181) #pragma omp single nowait */
    # 181 "uts.c"
    if (ort_mysingle(1))
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          _itn = ort_task_immediate_start(0);
          {
            # 183 "uts.c"
            (*num_nodes) = parTreeSearch(0, (*root), (*root)->numChildren);
            CANCEL_task_182 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        /* (l182) #pragma omp task untied */
        {
          struct __taskenv__ {
              unsigned long long (* num_nodes);
              struct node_t (* (* root));
            };
          struct __taskenv__ * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc0_);
          /* byref variables */
          _tenv->num_nodes = &(*num_nodes);
          _tenv->root = &(*root);
          ort_new_task(_taskFunc0_, (void *) _tenv, 0, 1);
        }
    ort_leaving_single();
  }
  CANCEL_parallel_180 :
    ort_taskwait(2);
  return ((void *) 0);
}

/* Outlined code for (l182) #pragma omp task untied */

static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      unsigned long long (* num_nodes);
      struct node_t (* (* root));
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  unsigned long long (* num_nodes) = _tenv->num_nodes;
  struct node_t (* (* root)) = _tenv->root;

  /* byresult variables */
  /* (l182) #pragma omp task untied -- body moved below */
  # 182 "uts.c"
  {
    # 183 "uts.c"
    (*num_nodes) = parTreeSearch(0, (*root), (*root)->numChildren);
    CANCEL_task_182 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}

static void * _taskFunc1_(void *);


unsigned long long parTreeSearch(int depth, struct node_t (* parent), int numChildren)
# 191 "uts.c"
{
  struct node_t (n[ numChildren]);
  struct node_t (* nodePtr);
  # 193 "uts.c"
  int i, j;
  unsigned long long subtreesize = 1, partialCount[ numChildren];

  for (i = 0; i < numChildren; i++)
    {
      nodePtr = &n[i];
      nodePtr->height = parent->height + 1;
      for (j = 0; j < computeGranularity; j++)
        {
          rng_spawn(parent->state.state, nodePtr->state.state, i);
        }
      nodePtr->numChildren = uts_numChildren(nodePtr);
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_i = i, i = _fip_i;
          struct node_t (* _fip_nodePtr) = nodePtr, (* nodePtr) = _fip_nodePtr;
          int _fip_depth = depth, depth = _fip_depth;

          _itn = ort_task_immediate_start(0);
          {
            # 210 "uts.c"
            partialCount[i] = parTreeSearch(depth + 1, nodePtr, nodePtr->numChildren);
            CANCEL_task_209 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        /* (l209) #pragma omp task untied firstprivate(i, nodePtr) shared(partialCount) */
        {
          struct __taskenv__ {
              unsigned long long (* partialCount)[ numChildren];
              int i;
              struct node_t (* nodePtr);
              int depth;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc1_);
          /* byref variables */
          _tenv->partialCount = &partialCount;
          /* byvalue variables */
          _tenv->i = i;
          _tenv->nodePtr = nodePtr;
          _tenv->depth = depth;
          ort_new_task(_taskFunc1_, (void *) _tenv, 0, 1);
        }
    }
  /* (l213) #pragma omp taskwait  */
  # 213 "uts.c"
  ort_taskwait(0);
  # 217 "uts.c"
  for (i = 0; i < numChildren; i++)
    {
      subtreesize += partialCount[i];
    }
  return (subtreesize);
}

/* Outlined code for (l209) #pragma omp task untied firstprivate(i, nodePtr) shared(partialCount) */

static void * _taskFunc1_(void * __arg)
{
  struct __taskenv__ {
      unsigned long long (* partialCount)[ numChildren];
      int i;
      struct node_t (* nodePtr);
      int depth;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  unsigned long long (* partialCount)[ numChildren] = _tenv->partialCount;

  /* byvalue variables */
  int i = _tenv->i;
  struct node_t (* nodePtr) = _tenv->nodePtr;
  int depth = _tenv->depth;

  /* byresult variables */
  /* (l209) #pragma omp task untied firstprivate(i, nodePtr) shared(partialCount) -- body moved below */
  # 209 "uts.c"
  {
    # 210 "uts.c"
    (*partialCount)[i] = parTreeSearch(depth + 1, nodePtr, nodePtr->numChildren);
    CANCEL_task_209 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc1_);
  return ((void *) 0);
}


void uts_read_file(char * filename)
# 223 "uts.c"
{
  struct _IO_FILE (* fin);

  if ((fin = fopen(filename, "r")) == ((void *) 0))
    {
      {
        if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
          {
            fprintf(stdout, "Could not open input file (%s)\n", filename);
          }
      }
      ;
      exit(-1);
    }
  __isoc99_fscanf(fin, "%lf %lf %d %d %d %llu %d %llu", &b_0, &nonLeafProb, &nonLeafBF, &rootId, &computeGranularity, &exp_tree_size, &exp_tree_depth, &exp_num_leaves);
  fclose(fin);
  computeGranularity = (((1) > (computeGranularity)) ? (1) : (computeGranularity));
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "\n");
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Root branching factor                = %f\n", b_0);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Root seed (0 <= 2^31)                = %d\n", rootId);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Probability of non-leaf node         = %f\n", nonLeafProb);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Number of children for non-leaf node = %d\n", nonLeafBF);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "E(n)                                 = %f\n", (double) (nonLeafProb * nonLeafBF));
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "E(s)                                 = %f\n", (double) (1.0 / (1.0 - nonLeafProb * nonLeafBF)));
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Compute granularity                  = %d\n", computeGranularity);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Random number generator              = ");
      }
  }
  ;
  rng_showtype();
}


void uts_show_stats(void)
{
  int nPes = atoi(bots_resources);
  int chunkSize = 0;

  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "\n");
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Tree size                            = %llu\n", (unsigned long long) bots_number_of_tasks);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Maximum tree depth                   = %d\n", maxTreeDepth);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Chunk size                           = %d\n", chunkSize);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Number of leaves                     = %llu (%.2f%%)\n", nLeaves, nLeaves / (float) bots_number_of_tasks * 100.0);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Number of PE's                       = %.4d threads\n", nPes);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Wallclock time                       = %.3f sec\n", bots_time_program);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Overall performance                  = %.0f nodes/sec\n", (bots_number_of_tasks / bots_time_program));
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Performance per PE                   = %.0f nodes/sec\n", (bots_number_of_tasks / bots_time_program / nPes));
      }
  }
  ;
}


int uts_check_result(void)
{
  int answer = 1;

  if (bots_number_of_tasks != exp_tree_size)
    {
      answer = 2;
      {
        if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
          {
            fprintf(stdout, "Incorrect tree size result (%llu instead of %llu).\n", bots_number_of_tasks, exp_tree_size);
          }
      }
      ;
    }
  return (answer);
}

