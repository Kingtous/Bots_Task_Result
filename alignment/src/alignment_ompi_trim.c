void ort_taskwait(int num){}
void ort_taskenv_free(void *ptr, void *(*task_func)(void *)){}
void ort_leaving_single(){}
void * _ompi_crity;
void ort_atomic_begin(){}
void ort_atomic_end(){}
/* (l216) typedef long unsigned int size_t; */

/* (l30) typedef unsigned char __u_char; */

/* (l31) typedef unsigned short int __u_short; */

/* (l32) typedef unsigned int __u_int; */

/* (l33) typedef unsigned long int __u_long; */

/* (l36) typedef signed char __int8_t; */

/* (l37) typedef unsigned char __uint8_t; */

/* (l38) typedef signed short int __int16_t; */

/* (l39) typedef unsigned short int __uint16_t; */

/* (l40) typedef signed int __int32_t; */

/* (l41) typedef unsigned int __uint32_t; */

/* (l43) typedef signed long int __int64_t; */

/* (l44) typedef unsigned long int __uint64_t; */

/* (l52) typedef long int __quad_t; */

/* (l53) typedef unsigned long int __u_quad_t; */

/* (l61) typedef long int __intmax_t; */

/* (l62) typedef unsigned long int __uintmax_t; */

/* (l133) typedef unsigned long int __dev_t; */

/* (l134) typedef unsigned int __uid_t; */

/* (l135) typedef unsigned int __gid_t; */

/* (l136) typedef unsigned long int __ino_t; */

/* (l137) typedef unsigned long int __ino64_t; */

/* (l138) typedef unsigned int __mode_t; */

/* (l139) typedef unsigned long int __nlink_t; */

/* (l140) typedef long int __off_t; */

/* (l141) typedef long int __off64_t; */

/* (l142) typedef int __pid_t; */

struct _noname0_ {
    int __val[ 2];
  };

/* (l143) typedef struct _noname0_  __fsid_t; */

/* (l144) typedef long int __clock_t; */

/* (l145) typedef unsigned long int __rlim_t; */

/* (l146) typedef unsigned long int __rlim64_t; */

/* (l147) typedef unsigned int __id_t; */

/* (l148) typedef long int __time_t; */

/* (l149) typedef unsigned int __useconds_t; */

/* (l150) typedef long int __suseconds_t; */

/* (l152) typedef int __daddr_t; */

/* (l153) typedef int __key_t; */

/* (l156) typedef int __clockid_t; */

/* (l159) typedef void * __timer_t; */

/* (l162) typedef long int __blksize_t; */

/* (l167) typedef long int __blkcnt_t; */

/* (l168) typedef long int __blkcnt64_t; */

/* (l171) typedef unsigned long int __fsblkcnt_t; */

/* (l172) typedef unsigned long int __fsblkcnt64_t; */

/* (l175) typedef unsigned long int __fsfilcnt_t; */

/* (l176) typedef unsigned long int __fsfilcnt64_t; */

/* (l179) typedef long int __fsword_t; */

/* (l181) typedef long int __ssize_t; */

/* (l184) typedef long int __syscall_slong_t; */

/* (l186) typedef unsigned long int __syscall_ulong_t; */

/* (l190) typedef __off64_t __loff_t; */

/* (l191) typedef char * __caddr_t; */

/* (l194) typedef long int __intptr_t; */

/* (l197) typedef unsigned int __socklen_t; */

/* (l202) typedef int __sig_atomic_t; */


struct _IO_FILE;

/* (l5) typedef struct _IO_FILE  __FILE; */


struct _IO_FILE;

/* (l7) typedef struct _IO_FILE  FILE; */

struct _noname1_ {
    int __count;
    union {
        unsigned int __wch;
        char __wchb[ 4];
      } __value;
  };

/* (l21) typedef struct _noname1_  __mbstate_t; */

struct _noname2_ {
    long int __pos;
    struct _noname1_ __state;
  };

/* (l30) typedef struct _noname2_  _G_fpos_t; */

struct _noname3_ {
    long int __pos;
    struct _noname1_ __state;
  };

/* (l35) typedef struct _noname3_  _G_fpos64_t; */

/* (l40) typedef __builtin_va_list __gnuc_va_list; */


struct _IO_jump_t;
struct _IO_FILE;

/* (l154) typedef void _IO_lock_t; */

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

struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;

/* (l337) typedef __ssize_t __io_read_fn(void * __cookie, char * __buf, size_t __nbytes); */

/* (l346) typedef __ssize_t __io_write_fn(void * __cookie, const char * __buf, size_t __n); */

/* (l354) typedef int __io_seek_fn(void * __cookie, __off64_t * __pos, int __w); */

/* (l357) typedef int __io_close_fn(void * __cookie); */

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

/* (l57) typedef __off_t off_t; */

/* (l71) typedef __ssize_t ssize_t; */

/* (l78) typedef _G_fpos_t fpos_t; */


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
extern int fgetpos(struct _IO_FILE (* __stream), struct _noname2_ (* __pos));
extern int fsetpos(struct _IO_FILE (* __stream), const struct _noname2_ (* __pos));
extern void clearerr(struct _IO_FILE (* __stream));
extern int feof(struct _IO_FILE (* __stream));
extern int ferror(struct _IO_FILE (* __stream));
extern void clearerr_unlocked(struct _IO_FILE (* __stream));
extern int feof_unlocked(struct _IO_FILE (* __stream));
extern int ferror_unlocked(struct _IO_FILE (* __stream));
extern void perror(const char * __s);

extern int sys_nerr;
extern const char *const sys_errlist[];

extern int fileno(struct _IO_FILE (* __stream));
extern int fileno_unlocked(struct _IO_FILE (* __stream));
extern struct _IO_FILE (* popen(const char * __command, const char * __modes));
extern int pclose(struct _IO_FILE (* __stream));
extern char * ctermid(char * __s);
extern void flockfile(struct _IO_FILE (* __stream));
extern int ftrylockfile(struct _IO_FILE (* __stream));
extern void funlockfile(struct _IO_FILE (* __stream));

/* (l328) typedef int wchar_t; */

enum _noname4_ {
    P_ALL, P_PID, P_PGID
  };

/* (l57) typedef enum _noname4_  idtype_t; */

/* (l207) typedef float _Float32; */

/* (l244) typedef double _Float64; */

/* (l261) typedef double _Float32x; */

/* (l278) typedef long double _Float64x; */

struct _noname5_ {
    int quot;
    int rem;
  };

/* (l62) typedef struct _noname5_  div_t; */

struct _noname6_ {
    long int quot;
    long int rem;
  };

/* (l70) typedef struct _noname6_  ldiv_t; */

struct _noname7_ {
    long long int quot;
    long long int rem;
  };

/* (l80) typedef struct _noname7_  lldiv_t; */


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

/* (l33) typedef __u_char u_char; */

/* (l34) typedef __u_short u_short; */

/* (l35) typedef __u_int u_int; */

/* (l36) typedef __u_long u_long; */

/* (l37) typedef __quad_t quad_t; */

/* (l38) typedef __u_quad_t u_quad_t; */

/* (l39) typedef __fsid_t fsid_t; */

/* (l44) typedef __loff_t loff_t; */

/* (l48) typedef __ino_t ino_t; */

/* (l60) typedef __dev_t dev_t; */

/* (l65) typedef __gid_t gid_t; */

/* (l70) typedef __mode_t mode_t; */

/* (l75) typedef __nlink_t nlink_t; */

/* (l80) typedef __uid_t uid_t; */

/* (l98) typedef __pid_t pid_t; */

/* (l104) typedef __id_t id_t; */

/* (l115) typedef __daddr_t daddr_t; */

/* (l116) typedef __caddr_t caddr_t; */

/* (l122) typedef __key_t key_t; */

/* (l7) typedef __clock_t clock_t; */

/* (l7) typedef __clockid_t clockid_t; */

/* (l7) typedef __time_t time_t; */

/* (l7) typedef __timer_t timer_t; */

/* (l149) typedef unsigned long int ulong; */

/* (l150) typedef unsigned short int ushort; */

/* (l151) typedef unsigned int uint; */

/* (l24) typedef __int8_t int8_t; */

/* (l25) typedef __int16_t int16_t; */

/* (l26) typedef __int32_t int32_t; */

/* (l27) typedef __int64_t int64_t; */

/* (l161) typedef unsigned char u_int8_t; */

/* (l162) typedef unsigned short int u_int16_t; */

/* (l163) typedef unsigned int u_int32_t; */

/* (l165) typedef unsigned long int u_int64_t; */

/* (l170) typedef int register_t; */


static unsigned short int __bswap_16(unsigned short int __bsx)

{
  return (((unsigned short int) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8))));
}


static unsigned int __bswap_32(unsigned int __bsx)

{
  return (((((__bsx) & 0xff000000) >> 24) | (((__bsx) & 0x00ff0000) >> 8) | (((__bsx) & 0x0000ff00) << 8) | (((__bsx) & 0x000000ff) << 24)));
}


static unsigned long int __bswap_64(unsigned long int __bsx)
{
  return (((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56)));
}


static unsigned short int __uint16_identity(unsigned short int __x)

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

struct _noname8_ {
    unsigned long int __val[ (1024 / (8 * sizeof(unsigned long int)))];
  };

/* (l8) typedef struct _noname8_  __sigset_t; */

/* (l7) typedef __sigset_t sigset_t; */


struct timeval {
    long int tv_sec;
    long int tv_usec;
  };

struct timespec {
    long int tv_sec;
    long int tv_nsec;
  };

/* (l43) typedef __suseconds_t suseconds_t; */

/* (l49) typedef long int __fd_mask; */

struct _noname9_ {
    long int (__fds_bits[ 1024 / (8 * (int) sizeof(long int ))]);
  };

/* (l70) typedef struct _noname9_  fd_set; */

/* (l77) typedef __fd_mask fd_mask; */


extern int select(int __nfds, struct _noname9_ (* __readfds), struct _noname9_ (* __writefds), struct _noname9_ (* __exceptfds), struct timeval * __timeout);
extern int pselect(int __nfds, struct _noname9_ (* __readfds), struct _noname9_ (* __writefds), struct _noname9_ (* __exceptfds), const struct timespec * __timeout, const struct _noname8_ (* __sigmask));

extern unsigned int gnu_dev_major(unsigned long int __dev);
extern unsigned int gnu_dev_minor(unsigned long int __dev);
extern unsigned long int gnu_dev_makedev(unsigned int __major, unsigned int __minor);

/* (l212) typedef __blksize_t blksize_t; */

/* (l219) typedef __blkcnt_t blkcnt_t; */

/* (l223) typedef __fsblkcnt_t fsblkcnt_t; */

/* (l227) typedef __fsfilcnt_t fsfilcnt_t; */


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

union _noname10_ {
    char __size[ 4];
    int __align;
  };

/* (l36) typedef union _noname10_  pthread_mutexattr_t; */

union _noname11_ {
    char __size[ 4];
    int __align;
  };

/* (l45) typedef union _noname11_  pthread_condattr_t; */

/* (l49) typedef unsigned int pthread_key_t; */

/* (l53) typedef int pthread_once_t; */


union pthread_attr_t {
    char __size[ 56];
    long int __align;
  };

/* (l62) typedef union pthread_attr_t  pthread_attr_t; */

union _noname12_ {
    struct __pthread_mutex_s __data;
    char __size[ 40];
    long int __align;
  };

/* (l72) typedef union _noname12_  pthread_mutex_t; */

union _noname13_ {
    struct __pthread_cond_s __data;
    char __size[ 48];
    long long int __align;
  };

/* (l80) typedef union _noname13_  pthread_cond_t; */

union _noname14_ {
    struct __pthread_rwlock_arch_t __data;
    char __size[ 56];
    long int __align;
  };

/* (l91) typedef union _noname14_  pthread_rwlock_t; */

union _noname15_ {
    char __size[ 8];
    long int __align;
  };

/* (l97) typedef union _noname15_  pthread_rwlockattr_t; */

/* (l103) typedef volatile int pthread_spinlock_t; */

union _noname16_ {
    char __size[ 32];
    long int __align;
  };

/* (l112) typedef union _noname16_  pthread_barrier_t; */

union _noname17_ {
    char __size[ 4];
    int __align;
  };

/* (l118) typedef union _noname17_  pthread_barrierattr_t; */


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

extern void * alloca(long unsigned int __size);

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

extern void * bsearch(const void * __key, const void * __base, long unsigned int __nmemb, long unsigned int __size, int (* __compar)(const void *, const void *));
extern void qsort(void * __base, long unsigned int __nmemb, long unsigned int __size, int (* __compar)(const void *, const void *));
extern int abs(int __x);
extern long int labs(long int __x);
extern long long int llabs(long long int __x);
extern struct _noname5_ div(int __numer, int __denom);
extern struct _noname6_ ldiv(long int __numer, long int __denom);
extern struct _noname7_ lldiv(long long int __numer, long long int __denom);
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

struct __locale_struct {
    struct __locale_data * __locales[ 13];
    const unsigned short int * __ctype_b;
    const int * __ctype_tolower;
    const int * __ctype_toupper;
    const char * __names[ 13];
  };

/* (l42) typedef struct __locale_struct  * __locale_t; */

/* (l24) typedef __locale_t locale_t; */


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

extern void explicit_bzero(void * __s, long unsigned int __n);
extern char * strsep(char ** __stringp, const char * __delim);
extern char * strsignal(int __sig);
extern char * __stpcpy(char * __dest, const char * __src);
extern char * stpcpy(char * __dest, const char * __src);
extern char * __stpncpy(char * __dest, const char * __src, long unsigned int __n);
extern char * stpncpy(char * __dest, const char * __src, long unsigned int __n);

/* (l149) typedef float float_t; */

/* (l150) typedef double double_t; */


extern int __fpclassify(double __value);
extern int __signbit(double __value);
extern int __isinf(double __value);
extern int __finite(double __value);
extern int __isnan(double __value);
extern int __iseqsig(double __x, double __y);
extern int __issignaling(double __value);

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

extern int __fpclassifyf(float __value);
extern int __signbitf(float __value);
extern int __isinff(float __value);
extern int __finitef(float __value);
extern int __isnanf(float __value);
extern int __iseqsigf(float __x, float __y);
extern int __issignalingf(float __value);

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

extern int __fpclassifyl(long double __value);
extern int __signbitl(long double __value);
extern int __isinfl(long double __value);
extern int __finitel(long double __value);
extern int __isnanl(long double __value);
extern int __iseqsigl(long double __x, long double __y);
extern int __issignalingl(long double __value);

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

extern int signgam;
enum {
    FP_NAN = 0, FP_INFINITE = 1, FP_ZERO = 2, FP_SUBNORMAL = 3, FP_NORMAL = 4
  };

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
  };

/* (l58) typedef struct timezone  * __timezone_ptr_t; */

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

extern int getitimer(int __which, struct itimerval * __value);
extern int setitimer(int __which, const struct itimerval * __new, struct itimerval * __old);
extern int utimes(const char * __file, const struct timeval __tvp[ 2]);
extern int lutimes(const char * __file, const struct timeval __tvp[ 2]);
extern int futimes(int __fd, const struct timeval __tvp[ 2]);

extern char * dirname(char * __path);
extern char * __xpg_basename(char * __path);

char * amino_acid_order = "ABCDEFGHIKLMNPQRSTVWXYZ";
char * amino_acid_codes = "ABCDEFGHIKLMNPQRSTUVWXYZ-";
int gon250mt[] = {
    24, 0, 0, 5, 0, 115, -3, 0, -32, 47, 0, 0, -30, 27, 36, -23, 0, -8, -45, -39, 70, 5, 0, -20, 1, -8, -52, 66, -8, 0, -13, 4, 4, -1, -14, 60, -8, 0, -11, -38, -27, 10, -45, -22, 40, -4, 0, -28, 5, 12, -33, -11, 6, -21, 32, -12, 0, -15, -40, -28, 20, -44, -19, 28, -21, 40, -7, 0, -9, -30, -20, 16, -35, -13, 25, -14, 28, 43, -3, 0, -18, 22, 9, -31, 4, 12, -28, 8, -30, -22, 38, 3, 0, -31, -7, -5, -38, -16, -11, -26, -6, -23, -24, -9, 76, -2, 0, -24, 9, 17, -26, -10, 12, -19, 15, -16, -10, 7, -2, 27, -6, 0, -22, -3, 4, -32, -10, 6, -24, 27, -22, -17, 3, -9, 15, 47, 11, 0, 1, 5, 2, -28, 4, -2, -18, 1, -21, -14, 9, 4, 2, -2, 22, 6, 0, -5, 0, -1, -22, -11, -3, -6, 1, -13, -6, 5, 1, 0, -2, 15, 25, 1, 0, 0, -29, -19, 1, -33, -20, 31, -17, 18, 16, -22, -18, -15, -20, -10, 0, 34, -36, 0, -10, -52, -43, 36, -40, -8, -18, -35, -7, -10, -36, -50, -27, -16, -33, -35, -26, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -22, 0, -5, -28, -27, 51, -40, 22, -7, -21, 0, -2, -14, -31, -17, -18, -19, -19, -11, 41, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };

long unsigned int strlcpy(char * dst, const char * src, long unsigned int size);
void fill_chartab(char * chartab);
void encode(char * seq, char * naseq, int l);
void alloc_aln(int nseqs);
char * get_seq(char * sname, int * len, char * chartab, struct _IO_FILE (* fin));
int readseqs(char * filename);

void del(int k, int * print_ptr, int * last_print, int * displ);
void add(int v, int * print_ptr, int * last_print, int * displ);
int calc_score(int iat, int jat, int v1, int v2, int seq1, int seq2);
int get_matrix(int * matptr, int * xref, int scale);
void forward_pass(char * ia, char * ib, int n, int m, int * se1, int * se2, int * maxscore, int g, int gh);
void reverse_pass(char * ia, char * ib, int se1, int se2, int * sb1, int * sb2, int maxscore, int g, int gh);
int diff(int A, int B, int M, int N, int tb, int te, int * pr_ptr, int * last_print, int * displ, int seq1, int seq2, int g, int gh);
double tracepath(int tsb1, int tsb2, int * print_ptr, int * displ, int seq1, int seq2);
void init_matrix(void);
void pairalign_init(char * filename);
int pairalign();
int pairalign_seq();
void align_init();
void align();
void align_seq_init();
void align_seq();
void align_end();
int align_verify();

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


extern enum _noname18_ bots_verbose_mode;

int ktup, window, signif;
int prot_ktup, prot_window, prot_signif;
int gap_pos1, gap_pos2, mat_avscore;
int nseqs, max_aa;
int * seqlen_array, def_aa_xref[ 32 + 1];
int * bench_output, * seq_output;
double gap_open, gap_extend;
double prot_gap_open, prot_gap_extend;
double pw_go_penalty, pw_ge_penalty;
double prot_pw_go_penalty, prot_pw_ge_penalty;
char ** args, ** names, ** seq_array;
int matrix[ 32][ 32];
double gap_open_scale;
double gap_extend_scale;
int dnaFlag = 0;
int clustalw = 0;


void del(int k, int * print_ptr, int * last_print, int * displ)
{
  if (*last_print < 0)
    *last_print = displ[(*print_ptr) - 1] -= k;
  else
    *last_print = displ[(*print_ptr)++] = -k;
}


void add(int v, int * print_ptr, int * last_print, int * displ)
{
  if (*last_print < 0)
    {
      displ[(*print_ptr) - 1] = v;
      displ[(*print_ptr)++] = *last_print;
    }
  else
    {
      *last_print = displ[(*print_ptr)++] = v;
    }
}


int calc_score(int iat, int jat, int v1, int v2, int seq1, int seq2)
{
  int i, j, ipos, jpos;

  ipos = v1 + iat;
  jpos = v2 + jat;
  i = seq_array[seq1][ipos];
  j = seq_array[seq2][jpos];
  return ((matrix[i][j]));
}


int get_matrix(int * matptr, int * xref, int scale)
{
  int gg_score = 0;
  int gr_score = 0;
  int i, j, k, ti, tj, ix;
  int av1, av2, av3, min, max, maxres;

  for (i = 0; i <= max_aa; i++)
    for (j = 0; j <= max_aa; j++)
      matrix[i][j] = 0;
  ix = 0;
  maxres = 0;
  for (i = 0; i <= max_aa; i++)
    {
      ti = xref[i];
      for (j = 0; j <= i; j++)
        {
          tj = xref[j];
          if ((ti != -1) && (tj != -1))
            {
              k = matptr[ix];
              if (ti == tj)
                {
                  matrix[ti][ti] = k * scale;
                  maxres++;
                }
              else
                {
                  matrix[ti][tj] = k * scale;
                  matrix[tj][ti] = k * scale;
                }
              ix++;
            }
        }
    }
  maxres--;
  av1 = av2 = av3 = 0;
  for (i = 0; i <= max_aa; i++)
    {
      for (j = 0; j <= i; j++)
        {
          av1 += matrix[i][j];
          if (i == j)
            av2 += matrix[i][j];
          else
            av3 += matrix[i][j];
        }
    }
  av1 /= (maxres * maxres) / 2;
  av2 /= maxres;
  av3 /= (int) (((double) (maxres * maxres - maxres)) / 2);
  mat_avscore = -av3;
  min = max = matrix[0][0];
  for (i = 0; i <= max_aa; i++)
    for (j = 1; j <= i; j++)
      {
        if (matrix[i][j] < min)
          min = matrix[i][j];
        if (matrix[i][j] > max)
          max = matrix[i][j];
      }
  for (i = 0; i < gap_pos1; i++)
    {
      matrix[i][gap_pos1] = gr_score;
      matrix[gap_pos1][i] = gr_score;
      matrix[i][gap_pos2] = gr_score;
      matrix[gap_pos2][i] = gr_score;
    }
  matrix[gap_pos1][gap_pos1] = gg_score;
  matrix[gap_pos2][gap_pos2] = gg_score;
  matrix[gap_pos2][gap_pos1] = gg_score;
  matrix[gap_pos1][gap_pos2] = gg_score;
  maxres += 2;
  return ((maxres));
}


void forward_pass(char * ia, char * ib, int n, int m, int * se1, int * se2, int * maxscore, int g, int gh)
{
  int i, j, f, p, t, hh;
  int HH[ 5000];
  int DD[ 5000];

  *maxscore = 0;
  *se1 = *se2 = 0;
  for (i = 0; i <= m; i++)
    {
      HH[i] = 0;
      DD[i] = -g;
    }
  for (i = 1; i <= n; i++)
    {
      hh = p = 0;
      f = -g;
      for (j = 1; j <= m; j++)
        {
          f -= gh;
          t = hh - g - gh;
          if (f < t)
            f = t;
          DD[j] -= gh;
          t = HH[j] - g - gh;
          if (DD[j] < t)
            DD[j] = t;
          hh = p + matrix[(int) ia[i]][(int) ib[j]];
          if (hh < f)
            hh = f;
          if (hh < DD[j])
            hh = DD[j];
          if (hh < 0)
            hh = 0;
          p = HH[j];
          HH[j] = hh;
          if (hh > *maxscore)
            {
              *maxscore = hh;
              *se1 = i;
              *se2 = j;
            }
        }
    }
}


void reverse_pass(char * ia, char * ib, int se1, int se2, int * sb1, int * sb2, int maxscore, int g, int gh)
{
  int i, j, f, p, t, hh, cost;
  int HH[ 5000];
  int DD[ 5000];

  cost = 0;
  *sb1 = *sb2 = 1;
  for (i = se2; i > 0; i--)
    {
      HH[i] = -1;
      DD[i] = -1;
    }
  for (i = se1; i > 0; i--)
    {
      hh = f = -1;
      if (i == se1)
        p = 0;
      else
        p = -1;
      for (j = se2; j > 0; j--)
        {
          f -= gh;
          t = hh - g - gh;
          if (f < t)
            f = t;
          DD[j] -= gh;
          t = HH[j] - g - gh;
          if (DD[j] < t)
            DD[j] = t;
          hh = p + matrix[(int) ia[i]][(int) ib[j]];
          if (hh < f)
            hh = f;
          if (hh < DD[j])
            hh = DD[j];
          p = HH[j];
          HH[j] = hh;
          if (hh > cost)
            {
              cost = hh;
              *sb1 = i;
              *sb2 = j;
              if (cost >= maxscore)
                break;
            }
        }
      if (cost >= maxscore)
        break;
    }
}


int diff(int A, int B, int M, int N, int tb, int te, int * print_ptr, int * last_print, int * displ, int seq1, int seq2, int g, int gh)
{
  int i, j, f, e, s, t, hh;
  int midi, midj, midh, type;
  int HH[ 5000];
  int DD[ 5000];
  int RR[ 5000];
  int SS[ 5000];

  if (N <= 0)
    {
      if (M > 0)
        del(M, print_ptr, last_print, displ);
      return ((-(int) ((M) <= 0 ? 0 : tb + gh * (M))));
    }
  if (M <= 1)
    {
      if (M <= 0)
        {
          add(N, print_ptr, last_print, displ);
          return ((-(int) ((N) <= 0 ? 0 : tb + gh * (N))));
        }
      midh = -(tb + gh) - ((N) <= 0 ? 0 : te + gh * (N));
      hh = -(te + gh) - ((N) <= 0 ? 0 : tb + gh * (N));
      if (hh > midh)
        midh = hh;
      midj = 0;
      for (j = 1; j <= N; j++)
        {
          hh = calc_score(1, j, A, B, seq1, seq2) - ((N - j) <= 0 ? 0 : te + gh * (N - j)) - ((j - 1) <= 0 ? 0 : tb + gh * (j - 1));
          if (hh > midh)
            {
              midh = hh;
              midj = j;
            }
        }
      if (midj == 0)
        {
          del(1, print_ptr, last_print, displ);
          add(N, print_ptr, last_print, displ);
        }
      else
        {
          if (midj > 1)
            add(midj - 1, print_ptr, last_print, displ);
          displ[(*print_ptr)++] = *last_print = 0;
          if (midj < N)
            add(N - midj, print_ptr, last_print, displ);
        }
      return (midh);
    }
  midi = M / 2;
  HH[0] = 0.0;
  t = -tb;
  for (j = 1; j <= N; j++)
    {
      HH[j] = t = t - gh;
      DD[j] = t - g;
    }
  t = -tb;
  for (i = 1; i <= midi; i++)
    {
      s = HH[0];
      HH[0] = hh = t = t - gh;
      f = t - g;
      for (j = 1; j <= N; j++)
        {
          if ((hh = hh - g - gh) > (f = f - gh))
            f = hh;
          if ((hh = HH[j] - g - gh) > (e = DD[j] - gh))
            e = hh;
          hh = s + calc_score(i, j, A, B, seq1, seq2);
          if (f > hh)
            hh = f;
          if (e > hh)
            hh = e;
          s = HH[j];
          HH[j] = hh;
          DD[j] = e;
        }
    }
  DD[0] = HH[0];
  RR[N] = 0;
  t = -te;
  for (j = N - 1; j >= 0; j--)
    {
      RR[j] = t = t - gh;
      SS[j] = t - g;
    }
  t = -te;
  for (i = M - 1; i >= midi; i--)
    {
      s = RR[N];
      RR[N] = hh = t = t - gh;
      f = t - g;
      for (j = N - 1; j >= 0; j--)
        {
          if ((hh = hh - g - gh) > (f = f - gh))
            f = hh;
          if ((hh = RR[j] - g - gh) > (e = SS[j] - gh))
            e = hh;
          hh = s + calc_score(i + 1, j + 1, A, B, seq1, seq2);
          if (f > hh)
            hh = f;
          if (e > hh)
            hh = e;
          s = RR[j];
          RR[j] = hh;
          SS[j] = e;
        }
    }
  SS[N] = RR[N];
  midh = HH[0] + RR[0];
  midj = 0;
  type = 1;
  for (j = 0; j <= N; j++)
    {
      hh = HH[j] + RR[j];
      if (hh >= midh)
        if (hh > midh || (HH[j] != DD[j] && RR[j] == SS[j]))
          {
            midh = hh;
            midj = j;
          }
    }
  for (j = N; j >= 0; j--)
    {
      hh = DD[j] + SS[j] + g;
      if (hh > midh)
        {
          midh = hh;
          midj = j;
          type = 2;
        }
    }
  if (type == 1)
    {
      diff(A, B, midi, midj, tb, g, print_ptr, last_print, displ, seq1, seq2, g, gh);
      diff(A + midi, B + midj, M - midi, N - midj, g, te, print_ptr, last_print, displ, seq1, seq2, g, gh);
    }
  else
    {
      diff(A, B, midi - 1, midj, tb, 0.0, print_ptr, last_print, displ, seq1, seq2, g, gh);
      del(2, print_ptr, last_print, displ);
      diff(A + midi + 1, B + midj, M - midi - 1, N - midj, 0.0, te, print_ptr, last_print, displ, seq1, seq2, g, gh);
    }
  return (midh);
}


double tracepath(int tsb1, int tsb2, int * print_ptr, int * displ, int seq1, int seq2)
{
  int i, k;
  int i1 = tsb1;
  int i2 = tsb2;
  int pos = 0;
  int count = 0;

  for (i = 1; i <= *print_ptr - 1; ++i)
    {
      if (displ[i] == 0)
        {
          char c1 = seq_array[seq1][i1];
          char c2 = seq_array[seq2][i2];

          if ((c1 != gap_pos1) && (c1 != gap_pos2) && (c1 == c2))
            count++;
          ++i1;
          ++i2;
          ++pos;
        }
      else
        if ((k = displ[i]) > 0)
          {
            i2 += k;
            pos += k;
          }
        else
          {
            i1 -= k;
            pos -= k;
          }
    }
  return ((100.0 * (double) count));
}

static void * _taskFunc0_(void *);
static void * _thrFunc0_(void *);


int pairalign()
{
  int i, n, m, si, sj;
  int len1, len2, maxres;
  double gg, mm_score;
  int * mat_xref, * matptr;

  matptr = gon250mt;
  mat_xref = def_aa_xref;
  maxres = get_matrix(matptr, mat_xref, 10);
  if (maxres == 0)
    return ((-1));
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Start aligning ");
      }
  }
  ;
  /* (l442) #pragma omp parallel  */
  {
    ort_execute_parallel(_thrFunc0_, (void *) 0, -1, 0, 1);
  }

  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, " completed!\n");
      }
  }
  ;
  return (0);
}

/* Outlined code for (l442) #pragma omp parallel  */

static void * _thrFunc0_(void * __arg)
{
  /* byresult variables */
  /* (l442) #pragma omp parallel  -- body moved below */


  {
    /* (l444) #pragma omp single private(i, n, si, sj, len1, m) */

    if (ort_mysingle(1))
      {
        int i;
        int n;
        int si;
        int sj;
        int len1;
        int m;


        for (si = 0; si < nseqs; si++)
          {
            n = seqlen_array[si + 1];
            for (i = 1, len1 = 0; i <= n; i++)
              {
                char c = seq_array[si + 1][i];

                if ((c != gap_pos1) && (c != gap_pos2))
                  len1++;
              }
            for (sj = si + 1; sj < nseqs; sj++)
              {
                m = seqlen_array[sj + 1];
                if (n == 0 || m == 0)
                  {
                    bench_output[si * nseqs + sj] = (int) 1.0;
                  }
                else
                  {
                    _taskFunc0_((void *)0);
                  }
              }
          }
      }
    ort_leaving_single();
  }
  CANCEL_parallel_442 :
    ort_taskwait(2);
  return ((void *) 0);
}

/* Outlined code for (l457) #pragma omp task untied private(i, gg, len2, mm_score) firstprivate(m, n, si, sj, len1) shared(nseqs, bench_output, seqlen_array, seq_array, gap_pos1, gap_pos2, pw_ge_penalty, pw_go_penalty, mat_avscore) */

static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      int m;
      int sj;
      int n;
      int si;
      int len1;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* Private variables */
  int i;
  int len2;
  double gg;
  double mm_score;

  /* byvalue variables */
  int m = _tenv->m;
  int sj = _tenv->sj;
  int n = _tenv->n;
  int si = _tenv->si;
  int len1 = _tenv->len1;

  /* byresult variables */
  /* (l457) #pragma omp task untied private(i, gg, len2, mm_score) firstprivate(m, n, si, sj, len1) shared(nseqs, bench_output, seqlen_array, seq_array, gap_pos1, gap_pos2, pw_ge_penalty, pw_go_penalty, mat_avscore) -- body moved below */


  {
    int se1, se2, sb1, sb2, maxscore, seq1, seq2, g, gh;
    int displ[ 2 * 5000 + 1];
    int print_ptr, last_print;

    for (i = 1, len2 = 0; i <= m; i++)
      {
        char c = seq_array[sj + 1][i];

        if ((c != gap_pos1) && (c != gap_pos2))
          len2++;
      }
    if (dnaFlag == 1)
      {
        g = (int) (2 * 100 * pw_go_penalty * gap_open_scale);
        gh = (int) (100 * pw_ge_penalty * gap_extend_scale);
      }
    else
      {
        gg = pw_go_penalty + log((double) ((n) < (m) ? (n) : (m)));
        g = (int) ((mat_avscore <= 0) ? (2 * 100 * gg) : (2 * mat_avscore * gg * gap_open_scale));
        gh = (int) (100 * pw_ge_penalty);
      }
    seq1 = si + 1;
    seq2 = sj + 1;
    forward_pass(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh);
    reverse_pass(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh);
    print_ptr = 1;
    last_print = 0;
    diff(sb1 - 1, sb2 - 1, se1 - sb1 + 1, se2 - sb2 + 1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh);
    mm_score = tracepath(sb1, sb2, &print_ptr, displ, seq1, seq2);
    if (len1 == 0 || len2 == 0)
      mm_score = 0.0;
    else
      mm_score /= (double) ((len1) < (len2) ? (len1) : (len2));
    bench_output[si * nseqs + sj] = (int) mm_score;
    CANCEL_task_457 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}


int pairalign_seq()

{
  int i, n, m, si, sj;
  int len1, len2, maxres;
  double gg, mm_score;
  int * mat_xref, * matptr;

  matptr = gon250mt;
  mat_xref = def_aa_xref;
  maxres = get_matrix(matptr, mat_xref, 10);
  if (maxres == 0)
    return ((-1));
  for (si = 0; si < nseqs; si++)
    {
      n = seqlen_array[si + 1];
      for (i = 1, len1 = 0; i <= n; i++)
        {
          char c = seq_array[si + 1][i];

          if ((c != gap_pos1) && (c != gap_pos2))
            len1++;
        }
      for (sj = si + 1; sj < nseqs; sj++)
        {
          m = seqlen_array[sj + 1];
          if (n == 0 || m == 0)
            {
              seq_output[si * nseqs + sj] = (int) 1.0;
            }
          else
            {
              int se1, se2, sb1, sb2, maxscore, seq1, seq2, g, gh;
              int displ[ 2 * 5000 + 1];
              int print_ptr, last_print;

              for (i = 1, len2 = 0; i <= m; i++)
                {
                  char c = seq_array[sj + 1][i];

                  if ((c != gap_pos1) && (c != gap_pos2))
                    len2++;
                }
              if (dnaFlag == 1)
                {
                  g = (int) (2 * 100 * pw_go_penalty * gap_open_scale);
                  gh = (int) (100 * pw_ge_penalty * gap_extend_scale);
                }
              else
                {
                  gg = pw_go_penalty + log((double) ((n) < (m) ? (n) : (m)));
                  g = (int) ((mat_avscore <= 0) ? (2 * 100 * gg) : (2 * mat_avscore * gg * gap_open_scale));
                  gh = (int) (100 * pw_ge_penalty);
                }
              seq1 = si + 1;
              seq2 = sj + 1;
              forward_pass(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh);
              reverse_pass(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh);
              print_ptr = 1;
              last_print = 0;
              diff(sb1 - 1, sb2 - 1, se1 - sb1 + 1, se2 - sb2 + 1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh);
              mm_score = tracepath(sb1, sb2, &print_ptr, displ, seq1, seq2);
              if (len1 == 0 || len2 == 0)
                mm_score = 0.0;
              else
                mm_score /= (double) ((len1) < (len2) ? (len1) : (len2));
              seq_output[si * nseqs + sj] = (int) mm_score;
            }
        }
    }
  return (0);
}


void init_matrix(void)
{
  int i, j;
  char c1, c2;

  gap_pos1 = 32 - 2;
  gap_pos2 = 32 - 1;
  max_aa = strlen(amino_acid_codes) - 2;
  for (i = 0; i < 32; i++)
    def_aa_xref[i] = -1;
  for (i = 0; (c1 = amino_acid_order[i]); i++)
    for (j = 0; (c2 = amino_acid_codes[j]); j++)
      if (c1 == c2)
        {
          def_aa_xref[i] = j;
          break;
        }
}


void pairalign_init(char * filename)
{
  int i;

  if (!filename || !filename[0])
    {
      bots_error(0, "Please specify an input file with the -f option\n");
    }
  init_matrix();
  nseqs = readseqs(filename);
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Multiple Pairwise Alignment (%d sequences)\n", nseqs);
      }
  }
  ;
  for (i = 1; i <= nseqs; i++)
    ;
  if (clustalw == 1)
    {
      gap_open_scale = 0.6667;
      gap_extend_scale = 0.751;
    }
  else
    {
      gap_open_scale = 1.0;
      gap_extend_scale = 1.0;
    }
  if (dnaFlag == 1)
    {
      ktup = 2;
      window = 4;
      signif = 4;
      gap_open = 15.00;
      gap_extend = 6.66;
      pw_go_penalty = 15.00;
      pw_ge_penalty = 6.66;
    }
  else
    {
      ktup = 1;
      window = 5;
      signif = 5;
      gap_open = 10.0;
      gap_extend = 0.2;
      pw_go_penalty = 10.0;
      pw_ge_penalty = 0.1;
    }
}


void align_init()
{
  int i, j;

  bench_output = (int *) malloc(sizeof(int) * nseqs * nseqs);
  for (i = 0; i < nseqs; i++)
    for (j = 0; j < nseqs; j++)
      bench_output[i * nseqs + j] = 0;
}


void align()
{
  pairalign();
}


void align_seq_init()
{
  int i, j;

  seq_output = (int *) malloc(sizeof(int) * nseqs * nseqs);
  bench_output = (int *) malloc(sizeof(int) * nseqs * nseqs);
  for (i = 0; i < nseqs; i++)
    for (j = 0; j < nseqs; j++)
      seq_output[i * nseqs + j] = 0;
}


void align_seq()
{
  pairalign_seq();
}


void align_end()
{
  int i, j;

  for (i = 0; i < nseqs; i++)
    for (j = 0; j < nseqs; j++)
      if (bench_output[i * nseqs + j] != 0)
        ;
}


int align_verify()
{
  int i, j;
  int result = 1;

  for (i = 0; i < nseqs; i++)
    {
      for (j = 0; j < nseqs; j++)
        {
          if (bench_output[i * nseqs + j] != seq_output[i * nseqs + j])
            {
              {
                if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
                  {
                    fprintf(stdout, "Error: Optimized prot. (%3d:%3d)=%5d Sequential prot. (%3d:%3d)=%5d\n", i + 1, j + 1, (int) bench_output[i * nseqs + j], i + 1, j + 1, (int) seq_output[i * nseqs + j]);
                  }
              }
              ;
              result = 2;
            }
        }
    }
  return (result);
}

