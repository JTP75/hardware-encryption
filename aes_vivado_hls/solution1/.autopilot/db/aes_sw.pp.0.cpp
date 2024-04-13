# 1 "AES_HLS_ECE1155/src/aes_sw.cpp"
# 1 "AES_HLS_ECE1155/src/aes_sw.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "C:/Xilinx/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "C:/Xilinx/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "AES_HLS_ECE1155/src/aes_sw.cpp" 2
# 1 "AES_HLS_ECE1155/src/aes_sw.hpp" 1



# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 9 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 11 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 26 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 84 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 120 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 157 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);

  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);


  void perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);




  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);


  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);

  int unlink(const char *_Filename) ;


  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);




  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
# 330 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;





  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
# 373 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 417 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 475 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);





  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;



}


#pragma pack(pop)


# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 9 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 511 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 5 "AES_HLS_ECE1155/src/aes_sw.hpp" 2
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 1 3 4
# 33 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 1 3 4
# 28 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 28 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4




# 1 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 32 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4



typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 33 "C:/Xilinx/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 2 3 4
# 6 "AES_HLS_ECE1155/src/aes_sw.hpp" 2


const uint8_t sbox[256] = {

    0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
    0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
    0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
    0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
    0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
    0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
    0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
    0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
    0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
    0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
    0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
    0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
    0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
    0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
    0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
    0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16};


const uint8_t rsbox[256] = {

    0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,
    0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,
    0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
    0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,
    0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,
    0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
    0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,
    0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,
    0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,
    0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,
    0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,
    0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
    0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,
    0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,
    0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
    0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d};


const uint8_t rcon[255] = {
    0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8,
    0xab, 0x4d, 0x9a, 0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3,
    0x7d, 0xfa, 0xef, 0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f,
    0x25, 0x4a, 0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d,
    0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab,
    0x4d, 0x9a, 0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d,
    0xfa, 0xef, 0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25,
    0x4a, 0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d, 0x01,
    0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab, 0x4d,
    0x9a, 0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d, 0xfa,
    0xef, 0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25, 0x4a,
    0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d, 0x01, 0x02,
    0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab, 0x4d, 0x9a,
    0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d, 0xfa, 0xef,
    0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94,
    0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d, 0x01, 0x02, 0x04,
    0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab, 0x4d, 0x9a, 0x2f,
    0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d, 0xfa, 0xef, 0xc5,
    0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94, 0x33,
    0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb};

void aes128_expand_key(const uint8_t *key, uint8_t *expanded_key);
void aes128_sub_bytes(uint8_t *state);
void aes128_sub_bytes_inv(uint8_t *state);
void aes128_shift_row(uint8_t *state, uint8_t n);
void aes128_shift_row_inv(uint8_t *state, uint8_t n);
void aes128_shift_rows(uint8_t *state);
void aes128_shift_rows_inv(uint8_t *state);
void aes128_mix_column(uint8_t *column);
void aes128_mix_column_inv(uint8_t *column);
void aes128_mix_columns(uint8_t *state);
void aes128_mix_columns_inv(uint8_t *state);
void aes128_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key);
void aes128_add_round_key(uint8_t *state, const uint8_t *round_key);
void aes128_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);
void aes128_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);

void aes192_expand_key(const uint8_t *key, uint8_t *expanded_key);
void aes192_sub_bytes(uint8_t *state);
void aes192_sub_bytes_inv(uint8_t *state);
void aes192_shift_row(uint8_t *state, uint8_t n);
void aes192_shift_row_inv(uint8_t *state, uint8_t n);
void aes192_shift_rows(uint8_t *state);
void aes192_shift_rows_inv(uint8_t *state);
void aes192_mix_column(uint8_t *column);
void aes192_mix_column_inv(uint8_t *column);
void aes192_mix_columns(uint8_t *state);
void aes192_mix_columns_inv(uint8_t *state);
void aes192_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key);
void aes192_add_round_key(uint8_t *state, const uint8_t *round_key);
void aes192_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);
void aes192_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);

void aes256_expand_key(const uint8_t *key, uint8_t *expanded_key);
void aes256_sub_bytes(uint8_t *state);
void aes256_sub_bytes_inv(uint8_t *state);
void aes256_shift_row(uint8_t *state, uint8_t n);
void aes256_shift_row_inv(uint8_t *state, uint8_t n);
void aes256_shift_rows(uint8_t *state);
void aes256_shift_rows_inv(uint8_t *state);
void aes256_mix_column(uint8_t *column);
void aes256_mix_column_inv(uint8_t *column);
void aes256_mix_columns(uint8_t *state);
void aes256_mix_columns_inv(uint8_t *state);
void aes256_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key);
void aes256_add_round_key(uint8_t *state, const uint8_t *round_key);
void aes256_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);
void aes256_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out);
# 2 "AES_HLS_ECE1155/src/aes_sw.cpp" 2







uint8_t gmul(uint8_t a, uint8_t b) {
    uint8_t rslt = 0;
    for (; b; b>>=1) {
        if (b & 1) {
            rslt ^= a;
        } if (a & 0x80) {
            a = (a<<1) ^ 0x1b;
        } else {
            a <<= 1;
        }
    }
    return rslt;
}



void rotate_word(uint8_t *word) {
    uint8_t tmp = word[0];
    for (int i=0; i<3; i++) word[i] = word[i+1];
    word[3] = tmp;
}




void aes128_expand_key(const uint8_t *key, uint8_t *expanded_key) {
    int i=0, j=1, size=0;
    uint8_t tmp[4];

    while (size<16) {
        expanded_key[size] = key[size++];
    }

    while (size<176) {
        for (i=0; i<4; i++) {
            tmp[i] = expanded_key[i + size-4];
        }
        if (size%16==0) {
            rotate_word(tmp);
            for (i=0; i<4; i++) {
                tmp[i] = sbox[tmp[i]];
            }
            tmp[0] ^= rcon[j++];
        }
        for (i=0; i<4; i++) {
            expanded_key[size] = expanded_key[size-16] ^ tmp[i];
            size++;
        }
    }
}



void aes128_sub_bytes(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = sbox[state[i]];
    }
}



void aes128_sub_bytes_inv(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = rsbox[state[i]];
    }
}




void aes128_shift_row(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[0];
        for (int j=0; j<3; j++) state[j] = state[j+1];
        state[3] = tmp;
    }
}




void aes128_shift_row_inv(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[3];
        for (int j=3; j>0; j--) state[j] = state[j-1];
        state[0] = tmp;
    }
}



void aes128_shift_rows(uint8_t *state) {
    for (int i=0; i<4; i++) aes128_shift_row(state + 4*i, i);
}



void aes128_shift_rows_inv(uint8_t *state) {
    for (int i=0; i<4; i++) aes128_shift_row_inv(state + 4*i, i);
}



void aes128_mix_column(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],2) ^ gmul(copy[1],3) ^ gmul(copy[2],1) ^ gmul(copy[3],1);
    column[1] = gmul(copy[0],1) ^ gmul(copy[1],2) ^ gmul(copy[2],3) ^ gmul(copy[3],1);
    column[2] = gmul(copy[0],1) ^ gmul(copy[1],1) ^ gmul(copy[2],2) ^ gmul(copy[3],3);
    column[3] = gmul(copy[0],3) ^ gmul(copy[1],1) ^ gmul(copy[2],1) ^ gmul(copy[3],2);
}



void aes128_mix_column_inv(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],14) ^ gmul(copy[1],11) ^ gmul(copy[2],13) ^ gmul(copy[3],9);
    column[1] = gmul(copy[0],9) ^ gmul(copy[1],14) ^ gmul(copy[2],11) ^ gmul(copy[3],13);
    column[2] = gmul(copy[0],13) ^ gmul(copy[1],9) ^ gmul(copy[2],14) ^ gmul(copy[3],11);
    column[3] = gmul(copy[0],11) ^ gmul(copy[1],13) ^ gmul(copy[2],9) ^ gmul(copy[3],14);
}



void aes128_mix_columns(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes128_mix_column(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}



void aes128_mix_columns_inv(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes128_mix_column_inv(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}




void aes128_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            round_key[i + 4*j] = expanded_key[4*i + j];
        }
    }
}




void aes128_add_round_key(uint8_t *state, const uint8_t *round_key) {
    for (int i=0; i<16; i++) state[i] ^= round_key[i];
}





void aes128_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[176];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes128_expand_key(key, expanded_key);
    aes128_extract_round_key(expanded_key, round_key);
    aes128_add_round_key(state, round_key);
    for (i=1; i<10; i++) {
        aes128_extract_round_key((expanded_key + 16*i), round_key);
        aes128_sub_bytes(state);
        aes128_shift_rows(state);
        aes128_mix_columns(state);
        aes128_add_round_key(state, round_key);
    }
    aes128_sub_bytes(state);
    aes128_shift_rows(state);
    aes128_extract_round_key((expanded_key + 160), round_key);
    aes128_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}





void aes128_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[176];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes128_expand_key(key, expanded_key);
    aes128_extract_round_key((expanded_key + 160), round_key);
    aes128_add_round_key(state, round_key);
    for (i=9; i>0; i--) {
        aes128_extract_round_key((expanded_key + 16*i), round_key);
        aes128_shift_rows_inv(state);
        aes128_sub_bytes_inv(state);
        aes128_add_round_key(state, round_key);
        aes128_mix_columns_inv(state);
    }
    aes128_shift_rows_inv(state);
    aes128_sub_bytes_inv(state);
    aes128_extract_round_key(expanded_key, round_key);
    aes128_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}




void aes192_expand_key(const uint8_t *key, uint8_t *expanded_key) {
    int i=0, j=1, size=0;
    uint8_t tmp[4];

    while (size<24) {
        expanded_key[size] = key[size++];
    }

    while (size<208) {
        for (i=0; i<4; i++) {
            tmp[i] = expanded_key[i + size-4];
        }
        if (size%24==0) {
            rotate_word(tmp);
            for (i=0; i<4; i++) {
                tmp[i] = sbox[tmp[i]];
            }
            tmp[0] ^= rcon[j++];
        }
        for (i=0; i<4; i++) {
            expanded_key[size] = expanded_key[size-24] ^ tmp[i];
            size++;
        }
    }
}



void aes192_sub_bytes(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = sbox[state[i]];
    }
}



void aes192_sub_bytes_inv(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = rsbox[state[i]];
    }
}




void aes192_shift_row(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[0];
        for (int j=0; j<3; j++) state[j] = state[j+1];
        state[3] = tmp;
    }
}




void aes192_shift_row_inv(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[3];
        for (int j=3; j>0; j--) state[j] = state[j-1];
        state[0] = tmp;
    }
}



void aes192_shift_rows(uint8_t *state) {
    for (int i=0; i<4; i++) aes192_shift_row(state + 4*i, i);
}



void aes192_shift_rows_inv(uint8_t *state) {
    for (int i=0; i<4; i++) aes192_shift_row_inv(state + 4*i, i);
}



void aes192_mix_column(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],2) ^ gmul(copy[1],3) ^ gmul(copy[2],1) ^ gmul(copy[3],1);
    column[1] = gmul(copy[0],1) ^ gmul(copy[1],2) ^ gmul(copy[2],3) ^ gmul(copy[3],1);
    column[2] = gmul(copy[0],1) ^ gmul(copy[1],1) ^ gmul(copy[2],2) ^ gmul(copy[3],3);
    column[3] = gmul(copy[0],3) ^ gmul(copy[1],1) ^ gmul(copy[2],1) ^ gmul(copy[3],2);
}



void aes192_mix_column_inv(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],14) ^ gmul(copy[1],11) ^ gmul(copy[2],13) ^ gmul(copy[3],9);
    column[1] = gmul(copy[0],9) ^ gmul(copy[1],14) ^ gmul(copy[2],11) ^ gmul(copy[3],13);
    column[2] = gmul(copy[0],13) ^ gmul(copy[1],9) ^ gmul(copy[2],14) ^ gmul(copy[3],11);
    column[3] = gmul(copy[0],11) ^ gmul(copy[1],13) ^ gmul(copy[2],9) ^ gmul(copy[3],14);
}



void aes192_mix_columns(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes192_mix_column(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}



void aes192_mix_columns_inv(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes192_mix_column_inv(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}




void aes192_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            round_key[i + 4*j] = expanded_key[4*i + j];
        }
    }
}




void aes192_add_round_key(uint8_t *state, const uint8_t *round_key) {
    for (int i=0; i<16; i++) state[i] ^= round_key[i];
}





void aes192_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[208];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes192_expand_key(key, expanded_key);
    aes192_extract_round_key(expanded_key, round_key);
    aes192_add_round_key(state, round_key);
    for (i=1; i<12; i++) {
        aes192_extract_round_key((expanded_key + 16*i), round_key);
        aes192_sub_bytes(state);
        aes192_shift_rows(state);
        aes192_mix_columns(state);
        aes192_add_round_key(state, round_key);
    }
    aes192_sub_bytes(state);
    aes192_shift_rows(state);
    aes192_extract_round_key((expanded_key + 192), round_key);
    aes192_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}





void aes192_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[208];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes192_expand_key(key, expanded_key);
    aes192_extract_round_key((expanded_key + 192), round_key);
    aes192_add_round_key(state, round_key);
    for (i=11; i>0; i--) {
        aes192_extract_round_key((expanded_key + 16*i), round_key);
        aes192_shift_rows_inv(state);
        aes192_sub_bytes_inv(state);
        aes192_add_round_key(state, round_key);
        aes192_mix_columns_inv(state);
    }
    aes192_shift_rows_inv(state);
    aes192_sub_bytes_inv(state);
    aes192_extract_round_key(expanded_key, round_key);
    aes192_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}




void aes256_expand_key(const uint8_t *key, uint8_t *expanded_key) {
    int i=0, j=1, size=0;
    uint8_t tmp[4];

    while (size<32) {
        expanded_key[size] = key[size++];
    }

    while (size<240) {
        for (i=0; i<4; i++) {
            tmp[i] = expanded_key[i + size-4];
        }
        if (size%32==0) {
            rotate_word(tmp);
            for (i=0; i<4; i++) {
                tmp[i] = sbox[tmp[i]];
            }
            tmp[0] ^= rcon[j++];
        } else if (size%32==16) {

            for (i=0; i<4; i++) {
                tmp[i] = sbox[tmp[i]];
            }
        }
        for (i=0; i<4; i++) {
            expanded_key[size] = expanded_key[size-32] ^ tmp[i];
            size++;
        }
    }
}



void aes256_sub_bytes(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = sbox[state[i]];
    }
}



void aes256_sub_bytes_inv(uint8_t *state) {
    for (int i=0; i<16; i++) {
        state[i] = rsbox[state[i]];
    }
}




void aes256_shift_row(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[0];
        for (int j=0; j<3; j++) state[j] = state[j+1];
        state[3] = tmp;
    }
}




void aes256_shift_row_inv(uint8_t *state, uint8_t n) {
    uint8_t tmp;
    for (int i=0; i<n; i++) {
        tmp = state[3];
        for (int j=3; j>0; j--) state[j] = state[j-1];
        state[0] = tmp;
    }
}



void aes256_shift_rows(uint8_t *state) {
    for (int i=0; i<4; i++) aes256_shift_row(state + 4*i, i);
}



void aes256_shift_rows_inv(uint8_t *state) {
    for (int i=0; i<4; i++) aes256_shift_row_inv(state + 4*i, i);
}



void aes256_mix_column(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],2) ^ gmul(copy[1],3) ^ gmul(copy[2],1) ^ gmul(copy[3],1);
    column[1] = gmul(copy[0],1) ^ gmul(copy[1],2) ^ gmul(copy[2],3) ^ gmul(copy[3],1);
    column[2] = gmul(copy[0],1) ^ gmul(copy[1],1) ^ gmul(copy[2],2) ^ gmul(copy[3],3);
    column[3] = gmul(copy[0],3) ^ gmul(copy[1],1) ^ gmul(copy[2],1) ^ gmul(copy[3],2);
}



void aes256_mix_column_inv(uint8_t *column) {
    uint8_t copy[4];
    for (int i=0; i<4; i++) copy[i] = column[i];
    column[0] = gmul(copy[0],14) ^ gmul(copy[1],11) ^ gmul(copy[2],13) ^ gmul(copy[3],9);
    column[1] = gmul(copy[0],9) ^ gmul(copy[1],14) ^ gmul(copy[2],11) ^ gmul(copy[3],13);
    column[2] = gmul(copy[0],13) ^ gmul(copy[1],9) ^ gmul(copy[2],14) ^ gmul(copy[3],11);
    column[3] = gmul(copy[0],11) ^ gmul(copy[1],13) ^ gmul(copy[2],9) ^ gmul(copy[3],14);
}



void aes256_mix_columns(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes256_mix_column(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}



void aes256_mix_columns_inv(uint8_t *state) {
    int i,j;
    uint8_t column[4];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) column[j] = state[i + 4*j];
        aes256_mix_column_inv(column);
        for (j=0; j<4; j++) state[i + 4*j] = column[j];
    }
}




void aes256_extract_round_key(const uint8_t *expanded_key, uint8_t *round_key) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            round_key[i + 4*j] = expanded_key[4*i + j];
        }
    }
}




void aes256_add_round_key(uint8_t *state, const uint8_t *round_key) {
    for (int i=0; i<16; i++) state[i] ^= round_key[i];
}





void aes256_encrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[240];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes256_expand_key(key, expanded_key);
    aes256_extract_round_key(expanded_key, round_key);
    aes256_add_round_key(state, round_key);
    for (i=1; i<14; i++) {
        aes256_extract_round_key((expanded_key + 16*i), round_key);
        aes256_sub_bytes(state);
        aes256_shift_rows(state);
        aes256_mix_columns(state);
        aes256_add_round_key(state, round_key);
    }
    aes256_sub_bytes(state);
    aes256_shift_rows(state);
    aes256_extract_round_key((expanded_key + 224), round_key);
    aes256_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}





void aes256_decrypt_block(const uint8_t *in, const uint8_t *key, uint8_t *out) {
    int i,j;
    uint8_t state[16], round_key[16], expanded_key[240];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            state[i + 4*j] = in[4*i + j];
        }
    }
    aes256_expand_key(key, expanded_key);
    aes256_extract_round_key((expanded_key + 224), round_key);
    aes256_add_round_key(state, round_key);
    for (i=13; i>0; i--) {
        aes256_extract_round_key((expanded_key + 16*i), round_key);
        aes256_shift_rows_inv(state);
        aes256_sub_bytes_inv(state);
        aes256_add_round_key(state, round_key);
        aes256_mix_columns_inv(state);
    }
    aes256_shift_rows_inv(state);
    aes256_sub_bytes_inv(state);
    aes256_extract_round_key(expanded_key, round_key);
    aes256_add_round_key(state, round_key);

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            out[4*i + j] = state[i + 4*j];
        }
    }
}
