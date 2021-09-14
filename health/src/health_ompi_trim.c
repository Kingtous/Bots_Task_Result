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

extern void __assert_fail(const char * __assertion, const char * __file, unsigned int __line, const char * __function);
extern void __assert_perror_fail(int __errnum, const char * __file, unsigned int __line, const char * __function);
extern void __assert(const char * __assertion, const char * __file, int __line);

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

enum omp_proc_bind_t {
    omp_proc_bind_false = 0, omp_proc_bind_true = 1, omp_proc_bind_master = 2, omp_proc_bind_close = 3, omp_proc_bind_spread = 4
  };

/* (l64) typedef enum omp_proc_bind_t  omp_proc_bind_t; */

/* (l67) typedef void * omp_lock_t; */


void omp_init_lock(void * (* lock));
void omp_destroy_lock(void * (* lock));
void omp_set_lock(void * (* lock));
void omp_unset_lock(void * (* lock));
int omp_test_lock(void * (* lock));

/* (l76) typedef void * omp_nest_lock_t; */

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

struct Results {
    long hosps_number;
    long hosps_personnel;
    long total_patients;
    long total_in_village;
    long total_waiting;
    long total_assess;
    long total_inside;
    long total_time;
    long total_hosps_v;
  };
extern int sim_level;
struct Patient {
    int id;
    signed int seed;
    int time;
    int time_left;
    int hosps_visited;
    struct Village * home_village;
    struct Patient * back;
    struct Patient * forward;
  };
struct Hosp {
    int personnel;
    int free_personnel;
    struct Patient * waiting;
    struct Patient * assess;
    struct Patient * inside;
    struct Patient * realloc;
    void * realloc_lock;
  };
struct Village {
    int id;
    struct Village * back;
    struct Village * next;
    struct Village * forward;
    struct Patient * population;
    struct Hosp hosp;
    int level;
    signed int seed;
  };
float my_rand(signed int (* seed));
struct Patient * generate_patient(struct Village * village);
void put_in_hosp(struct Hosp * hosp, struct Patient * patient);
void addList(struct Patient ** list, struct Patient * patient);
void removeList(struct Patient ** list, struct Patient * patient);
void check_patients_inside(struct Village * village);
void check_patients_waiting(struct Village * village);
void check_patients_realloc(struct Village * village);
void check_patients_assess_par(struct Village * village);
float get_num_people(struct Village * village);
float get_total_time(struct Village * village);
float get_total_hosps(struct Village * village);
struct Results get_results(struct Village * village);
void read_input_data(char * filename);
void allocate_village(struct Village ** capital, struct Village * back, struct Village * next, int level, signed int vid);
void sim_village_main_par(struct Village * top);
void sim_village_par(struct Village * village);
int check_village(struct Village * top);
void check_patients_assess(struct Village * village);
void check_patients_population(struct Village * village);
void sim_village(struct Village * village);
void my_print(struct Village * village);

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

int sim_level;
int sim_cities;
int sim_population_ratio;
int sim_time;
int sim_assess_time;
int sim_convalescence_time;
int sim_seed;
float sim_get_sick_p;
float sim_convalescence_p;
float sim_realloc_p;
int sim_pid = 0;
int res_population;
int res_hospitals;
int res_personnel;
int res_checkin;
int res_village;
int res_waiting;
int res_assess;
int res_inside;
float res_avg_stay;


float my_rand(signed int (* seed))
{
  signed int k;
  signed int idum = *seed;

  idum ^= 123459876;
  k = idum / 127773;
  idum = 16807 * (idum - k * 127773) - 2836 * k;
  idum ^= 123459876;
  if (idum < 0)
    idum += 2147483647;
  *seed = idum * 2147483647;
  return ((float) (1.0 / 2147483647) * idum);
}


void addList(struct Patient ** list, struct Patient * patient)
{
  if (*list == ((void *) 0))
    {
      *list = patient;
      patient->back = ((void *) 0);
      patient->forward = ((void *) 0);
    }
  else
    {
      struct Patient * aux = *list;

      while (aux->forward != ((void *) 0))
        aux = aux->forward;
      aux->forward = patient;
      patient->back = aux;
      patient->forward = ((void *) 0);
    }
}


void removeList(struct Patient ** list, struct Patient * patient)
{
  if (patient->back != ((void *) 0))
    patient->back->forward = patient->forward;
  else
    *list = patient->forward;
  if (patient->forward != ((void *) 0))
    patient->forward->back = patient->back;
}


void allocate_village(struct Village ** capital, struct Village * back, struct Village * next, int level, signed int vid)
{
  int i, population, personnel;
  struct Village * current, * inext;
  struct Patient * patient;

  if (level == 0)
    *capital = ((void *) 0);
  else
    {
      personnel = (int) pow(2, level);
      population = personnel * sim_population_ratio;
      *capital = (struct Village *) malloc(sizeof(struct Village));
      (*capital)->back = back;
      (*capital)->next = next;
      (*capital)->level = level;
      (*capital)->id = vid;
      (*capital)->seed = vid * (127773 + sim_seed);
      (*capital)->population = ((void *) 0);
      for (i = 0; i < population; i++)
        {
          patient = (struct Patient *) malloc(sizeof(struct Patient));
          patient->id = sim_pid++;
          patient->seed = (*capital)->seed;
          my_rand(&((*capital)->seed));
          patient->hosps_visited = 0;
          patient->time = 0;
          patient->time_left = 0;
          patient->home_village = *capital;
          addList(&((*capital)->population), patient);
        }
      (*capital)->hosp.personnel = personnel;
      (*capital)->hosp.free_personnel = personnel;
      (*capital)->hosp.assess = ((void *) 0);
      (*capital)->hosp.waiting = ((void *) 0);
      (*capital)->hosp.inside = ((void *) 0);
      (*capital)->hosp.realloc = ((void *) 0);
      omp_init_lock(&(*capital)->hosp.realloc_lock);
      inext = ((void *) 0);
      for (i = sim_cities; i > 0; i--)
        {
          allocate_village(&current, *capital, inext, level - 1, (vid * (signed int) sim_cities) + (signed int) i);
          inext = current;
        }
      (*capital)->forward = current;
    }
}


struct Results get_results(struct Village * village)
{
  struct Village * vlist;
  struct Patient * p;
  struct Results t_res, p_res;

  t_res.hosps_number = 0.0;
  t_res.hosps_personnel = 0.0;
  t_res.total_patients = 0.0;
  t_res.total_in_village = 0.0;
  t_res.total_waiting = 0.0;
  t_res.total_assess = 0.0;
  t_res.total_inside = 0.0;
  t_res.total_hosps_v = 0.0;
  t_res.total_time = 0.0;
  if (village == ((void *) 0))
    return (t_res);
  vlist = village->forward;
  while (vlist)
    {
      p_res = get_results(vlist);
      t_res.hosps_number += p_res.hosps_number;
      t_res.hosps_personnel += p_res.hosps_personnel;
      t_res.total_patients += p_res.total_patients;
      t_res.total_in_village += p_res.total_in_village;
      t_res.total_waiting += p_res.total_waiting;
      t_res.total_assess += p_res.total_assess;
      t_res.total_inside += p_res.total_inside;
      t_res.total_hosps_v += p_res.total_hosps_v;
      t_res.total_time += p_res.total_time;
      vlist = vlist->next;
    }
  t_res.hosps_number += 1.0;
  t_res.hosps_personnel += village->hosp.personnel;
  p = village->population;
  while (p != ((void *) 0))
    {
      t_res.total_patients += 1.0;
      t_res.total_in_village += 1.0;
      t_res.total_hosps_v += (float) (p->hosps_visited);
      t_res.total_time += (float) (p->time);
      p = p->forward;
    }
  p = village->hosp.waiting;
  while (p != ((void *) 0))
    {
      t_res.total_patients += 1.0;
      t_res.total_waiting += 1.0;
      t_res.total_hosps_v += (float) (p->hosps_visited);
      t_res.total_time += (float) (p->time);
      p = p->forward;
    }
  p = village->hosp.assess;
  while (p != ((void *) 0))
    {
      t_res.total_patients += 1.0;
      t_res.total_assess += 1.0;
      t_res.total_hosps_v += (float) (p->hosps_visited);
      t_res.total_time += (float) (p->time);
      p = p->forward;
    }
  p = village->hosp.inside;
  while (p != ((void *) 0))
    {
      t_res.total_patients += 1.0;
      t_res.total_inside += 1.0;
      t_res.total_hosps_v += (float) (p->hosps_visited);
      t_res.total_time += (float) (p->time);
      p = p->forward;
    }
  return (t_res);
}


void check_patients_inside(struct Village * village)
{
  struct Patient * list = village->hosp.inside;
  struct Patient * p;

  while (list != ((void *) 0))
    {
      p = list;
      list = list->forward;
      p->time_left--;
      if (p->time_left == 0)
        {
          village->hosp.free_personnel++;
          removeList(&(village->hosp.inside), p);
          addList(&(village->population), p);
        }
    }
}


void check_patients_assess_par(struct Village * village)
{
  struct Patient * list = village->hosp.assess;
  float rand;
  struct Patient * p;

  while (list != ((void *) 0))
    {
      p = list;
      list = list->forward;
      p->time_left--;
      if (p->time_left == 0)
        {
          rand = my_rand(&(p->seed));
          if (rand < sim_convalescence_p)
            {
              rand = my_rand(&(p->seed));
              if (rand > sim_realloc_p || village->level == sim_level)
                {
                  removeList(&(village->hosp.assess), p);
                  addList(&(village->hosp.inside), p);
                  p->time_left = sim_convalescence_time;
                  p->time += p->time_left;
                }
              else
                {
                  village->hosp.free_personnel++;
                  removeList(&(village->hosp.assess), p);
                  omp_set_lock(&(village->hosp.realloc_lock));
                  addList(&(village->back->hosp.realloc), p);
                  omp_unset_lock(&(village->hosp.realloc_lock));
                }
            }
          else
            {
              village->hosp.free_personnel++;
              removeList(&(village->hosp.assess), p);
              addList(&(village->population), p);
            }
        }
    }
}


void check_patients_waiting(struct Village * village)
{
  struct Patient * list = village->hosp.waiting;
  struct Patient * p;

  while (list != ((void *) 0))
    {
      p = list;
      list = list->forward;
      if (village->hosp.free_personnel > 0)
        {
          village->hosp.free_personnel--;
          p->time_left = sim_assess_time;
          p->time += p->time_left;
          removeList(&(village->hosp.waiting), p);
          addList(&(village->hosp.assess), p);
        }
      else
        {
          p->time++;
        }
    }
}


void check_patients_realloc(struct Village * village)
{
  struct Patient * p, * s;

  while (village->hosp.realloc != ((void *) 0))
    {
      p = s = village->hosp.realloc;
      while (p != ((void *) 0))
        {
          if (p->id < s->id)
            s = p;
          p = p->forward;
        }
      removeList(&(village->hosp.realloc), s);
      put_in_hosp(&(village->hosp), s);
    }
}


void check_patients_population(struct Village * village)
{
  struct Patient * list = village->population;
  struct Patient * p;
  float rand;

  while (list != ((void *) 0))
    {
      p = list;
      list = list->forward;
      rand = my_rand(&(p->seed));
      if (rand < sim_get_sick_p)
        {
          removeList(&(village->population), p);
          put_in_hosp(&(village->hosp), p);
        }
    }
}


void put_in_hosp(struct Hosp * hosp, struct Patient * patient)
{
  (patient->hosps_visited)++;
  if (hosp->free_personnel > 0)
    {
      hosp->free_personnel--;
      addList(&(hosp->assess), patient);
      patient->time_left = sim_assess_time;
      patient->time += patient->time_left;
    }
  else
    {
      addList(&(hosp->waiting), patient);
    }
}

static void * _taskFunc0_(void *);


void sim_village_par(struct Village * village)
{
  struct Village * vlist;

  if (village == ((void *) 0))
    return;
  vlist = village->forward;
  while (vlist)
    {
      _taskFunc0_((void *)0);

      vlist = vlist->next;
    }
  check_patients_inside(village);
  check_patients_assess_par(village);
  check_patients_waiting(village);
  /* (l518) #pragma omp taskwait  */

  ort_taskwait(0);

  check_patients_realloc(village);
  check_patients_population(village);
}

/* Outlined code for (l504) #pragma omp task untied */

static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      struct Village * vlist;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  struct Village * vlist = _tenv->vlist;

  /* byresult variables */
  /* (l504) #pragma omp task untied -- body moved below */

  {

    sim_village_par(vlist);
    CANCEL_task_504 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}


void my_print(struct Village * village)

{
  struct Village * vlist;
  struct Patient * plist;

  if (village == ((void *) 0))
    return;
  vlist = village->forward;
  while (vlist)
    {
      my_print(vlist);
      vlist = vlist->next;
    }
  plist = village->population;
  while (plist != ((void *) 0))
    {
      ;
      plist = plist->forward;
    }
  ;
}


void read_input_data(char * filename)
{
  struct _IO_FILE (* fin);
  int res;

  if ((fin = fopen(filename, "r")) == ((void *) 0))
    {
      {
        if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
          {
            fprintf(stdout, "Could not open sequence file (%s)\n", filename);
          }
      }
      ;
      exit(-1);
    }
  res = __isoc99_fscanf(fin, "%d %d %d %d %d %d %d %f %f %f %d %d %d %d %d %d %d %d %f", &sim_level, &sim_cities, &sim_population_ratio, &sim_time, &sim_assess_time, &sim_convalescence_time, &sim_seed, &sim_get_sick_p, &sim_convalescence_p, &sim_realloc_p, &res_population, &res_hospitals, &res_personnel, &res_checkin, &res_village, &res_waiting, &res_assess, &res_inside, &res_avg_stay);
  if (res == (-1))
    {
      {
        if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
          {
            fprintf(stdout, "Bogus input file (%s)\n", filename);
          }
      }
      ;
      exit(-1);
    }
  fclose(fin);
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
        fprintf(stdout, "Number of levels    = %d\n", (int) sim_level);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Cities per level    = %d\n", (int) sim_cities);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Population ratio    = %d\n", (int) sim_population_ratio);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Simulation time     = %d\n", (int) sim_time);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Assess time         = %d\n", (int) sim_assess_time);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Convalescence time  = %d\n", (int) sim_convalescence_time);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Initial seed        = %d\n", (int) sim_seed);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Get sick prob.      = %f\n", (float) sim_get_sick_p);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Convalescence prob. = %f\n", (float) sim_convalescence_p);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Realloc prob.       = %f\n", (float) sim_realloc_p);
      }
  }
  ;
}


int check_village(struct Village * top)
{
  struct Results result = get_results(top);
  int answer = 1;

  if (res_population != result.total_patients)
    answer = 2;
  if (res_hospitals != result.hosps_number)
    answer = 2;
  if (res_personnel != result.hosps_personnel)
    answer = 2;
  if (res_checkin != result.total_hosps_v)
    answer = 2;
  if (res_village != result.total_in_village)
    answer = 2;
  if (res_waiting != result.total_waiting)
    answer = 2;
  if (res_assess != result.total_assess)
    answer = 2;
  if (res_inside != result.total_inside)
    answer = 2;
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
        fprintf(stdout, "Sim. Variables      = expect / result\n");
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Total population    = %6d / %6d people\n", (int) res_population, (int) result.total_patients);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Hospitals           = %6d / %6d people\n", (int) res_hospitals, (int) result.hosps_number);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Personnel           = %6d / %6d people\n", (int) res_personnel, (int) result.hosps_personnel);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Check-in's          = %6d / %6d people\n", (int) res_checkin, (int) result.total_hosps_v);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "In Villages         = %6d / %6d people\n", (int) res_village, (int) result.total_in_village);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "In Waiting List     = %6d / %6d people\n", (int) res_waiting, (int) result.total_waiting);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "In Assess           = %6d / %6d people\n", (int) res_assess, (int) result.total_assess);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Inside Hospital     = %6d / %6d people\n", (int) res_inside, (int) result.total_inside);
      }
  }
  ;
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Average Stay        = %6f / %6f u/time\n", (float) res_avg_stay, (float) result.total_time / result.total_patients);
      }
  }
  ;
  my_print(top);
  return (answer);
}

static void * _taskFunc1_(void *);
static void * _thrFunc0_(void *);


void sim_village_main_par(struct Village * top)
{
  long i;

  /* (l635) #pragma omp parallel  */
  {
    struct __shvt__ {
        long (* i);
        struct Village * (* top);
      } _shvars;

    /* byref variables */
    _shvars.i = &i;
    _shvars.top = &top;
    ort_execute_parallel(_thrFunc0_, (void *) &_shvars, -1, 0, 1);
  }
}

/* Outlined code for (l635) #pragma omp parallel  */

static void * _thrFunc0_(void * __arg)
{
  struct __shvt__ {
      long (* i);
      struct Village * (* top);
    };
  struct __shvt__ * _shvars = (struct __shvt__ *) __arg;

  /* byref variables */
  long (* i) = _shvars->i;
  struct Village * (* top) = _shvars->top;

  /* byresult variables */
  /* (l635) #pragma omp parallel  -- body moved below */

  {
    /* (l636) #pragma omp single  */

    if (ort_mysingle(1))
      _taskFunc1_((void *)0);
    ort_leaving_single();
  }
  CANCEL_parallel_635 :
    ort_taskwait(2);
  return ((void *) 0);
}

/* Outlined code for (l637) #pragma omp task untied */

static void * _taskFunc1_(void * __arg)
{
  struct __taskenv__ {
      long (* i);
      struct Village * (* top);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  long (* i) = _tenv->i;
  struct Village * (* top) = _tenv->top;

  /* byresult variables */
  /* (l637) #pragma omp task untied -- body moved below */

  {

    for ((*i) = 0; (*i) < sim_time; (*i)++)
      sim_village_par((*top));
    CANCEL_task_637 :
      ;
  }
  ort_taskenv_free(_tenv, _taskFunc1_);
  return ((void *) 0);
}

