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

long long fib(int n);
long long fib_seq(int n);
void fib0(int n);
void fib0_seq(int n);
int fib_verify(int n);
long long fib_verify_value(int n);

long long fib_results[ 41] = {
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155
  };


long long fib_seq(int n)
{
  int x, y;

  if (n < 2)
    return (n);
  x = fib_seq(n - 1);
  y = fib_seq(n - 2);
  return (x + y);
}

static void * _taskFunc0_(void *);
static void * _taskFunc1_(void *);


long long fib(int n)
{
  long long x, y;

  if (n < 2)
    return (n);
  _taskFunc0_((void *)0);
  _taskFunc1_((void *)0);
  /* (l107) #pragma omp taskwait  */

  ort_taskwait(0);

  return (x + y);
}

/* Outlined code for (l104) #pragma omp task untied shared(y) firstprivate(n) */

static void * _taskFunc1_(void * __arg)
{
  struct __taskenv__ {
      long long (* y);
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  long long (* y) = _tenv->y;

  /* byvalue variables */
  int n = _tenv->n;

  /* byresult variables */
  /* (l104) #pragma omp task untied shared(y) firstprivate(n) -- body moved below */

  {

    (*y) = fib(n - 2);
    CANCEL_task_104 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc1_);
  return ((void *) 0);
}

/* Outlined code for (l102) #pragma omp task untied shared(x) firstprivate(n) */

static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      long long (* x);
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  long long (* x) = _tenv->x;

  /* byvalue variables */
  int n = _tenv->n;

  /* byresult variables */
  /* (l102) #pragma omp task untied shared(x) firstprivate(n) -- body moved below */

  {

    (*x) = fib(n - 1);
    CANCEL_task_102 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}


static long long par_res, seq_res;
static void * _thrFunc0_(void *);


void fib0(int n)
{
  /* (l117) #pragma omp parallel  */
  {
    struct __shvt__ {
        int (* n);
      } _shvars;

    /* byref variables */
    _shvars.n = &n;
    ort_execute_parallel(_thrFunc0_, (void *) &_shvars, -1, 0, 1);
  }

  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Fibonacci result for %d is %lld\n", n, par_res);
      }
  }
  ;
}

/* Outlined code for (l117) #pragma omp parallel  */

static void * _thrFunc0_(void * __arg)
{
  struct __shvt__ {
      int (* n);
    };
  struct __shvt__ * _shvars = (struct __shvt__ *) __arg;

  /* byref variables */
  int (* n) = _shvars->n;

  /* byresult variables */
  /* (l117) #pragma omp parallel  -- body moved below */

  {
    /* (l118) #pragma omp single  */

    if (ort_mysingle(1))

      par_res = fib((*n));
    ort_leaving_single();
  }
  CANCEL_parallel_117 :
    ort_taskwait(2);
  return ((void *) 0);
}


void fib0_seq(int n)

{
  seq_res = fib_seq(n);
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Fibonacci result for %d is %lld\n", n, seq_res);
      }
  }
  ;
}


long long fib_verify_value(int n)
{
  if (n < 41)
    return (fib_results[n]);
  return ((fib_verify_value(n - 1) + fib_verify_value(n - 2)));
}


int fib_verify(int n)
{
  int result;

  if (bots_sequential_flag)
    {
      if (par_res == seq_res)
        result = 1;
      else
        result = 2;
    }
  else
    {
      seq_res = fib_verify_value(n);
      if (par_res == seq_res)
        result = 1;
      else
        result = 2;
    }
  return (result);
}

