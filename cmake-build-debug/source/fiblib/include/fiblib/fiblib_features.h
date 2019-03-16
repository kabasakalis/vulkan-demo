
// This is a generated file. Do not edit!

#ifndef fiblib_COMPILER_DETECTION_H
#define fiblib_COMPILER_DETECTION_H

#ifdef __cplusplus
# define fiblib_COMPILER_IS_Comeau 0
# define fiblib_COMPILER_IS_Intel 0
# define fiblib_COMPILER_IS_PathScale 0
# define fiblib_COMPILER_IS_Embarcadero 0
# define fiblib_COMPILER_IS_Borland 0
# define fiblib_COMPILER_IS_Watcom 0
# define fiblib_COMPILER_IS_OpenWatcom 0
# define fiblib_COMPILER_IS_SunPro 0
# define fiblib_COMPILER_IS_HP 0
# define fiblib_COMPILER_IS_Compaq 0
# define fiblib_COMPILER_IS_zOS 0
# define fiblib_COMPILER_IS_XL 0
# define fiblib_COMPILER_IS_VisualAge 0
# define fiblib_COMPILER_IS_PGI 0
# define fiblib_COMPILER_IS_Cray 0
# define fiblib_COMPILER_IS_TI 0
# define fiblib_COMPILER_IS_Fujitsu 0
# define fiblib_COMPILER_IS_SCO 0
# define fiblib_COMPILER_IS_AppleClang 0
# define fiblib_COMPILER_IS_Clang 0
# define fiblib_COMPILER_IS_GNU 0
# define fiblib_COMPILER_IS_MSVC 0
# define fiblib_COMPILER_IS_ADSP 0
# define fiblib_COMPILER_IS_IAR 0
# define fiblib_COMPILER_IS_ARMCC 0
# define fiblib_COMPILER_IS_MIPSpro 0

#if defined(__COMO__)
# undef fiblib_COMPILER_IS_Comeau
# define fiblib_COMPILER_IS_Comeau 1

#elif defined(__INTEL_COMPILER) || defined(__ICC)
# undef fiblib_COMPILER_IS_Intel
# define fiblib_COMPILER_IS_Intel 1

#elif defined(__PATHCC__)
# undef fiblib_COMPILER_IS_PathScale
# define fiblib_COMPILER_IS_PathScale 1

#elif defined(__BORLANDC__) && defined(__CODEGEARC_VERSION__)
# undef fiblib_COMPILER_IS_Embarcadero
# define fiblib_COMPILER_IS_Embarcadero 1

#elif defined(__BORLANDC__)
# undef fiblib_COMPILER_IS_Borland
# define fiblib_COMPILER_IS_Borland 1

#elif defined(__WATCOMC__) && __WATCOMC__ < 1200
# undef fiblib_COMPILER_IS_Watcom
# define fiblib_COMPILER_IS_Watcom 1

#elif defined(__WATCOMC__)
# undef fiblib_COMPILER_IS_OpenWatcom
# define fiblib_COMPILER_IS_OpenWatcom 1

#elif defined(__SUNPRO_CC)
# undef fiblib_COMPILER_IS_SunPro
# define fiblib_COMPILER_IS_SunPro 1

#elif defined(__HP_aCC)
# undef fiblib_COMPILER_IS_HP
# define fiblib_COMPILER_IS_HP 1

#elif defined(__DECCXX)
# undef fiblib_COMPILER_IS_Compaq
# define fiblib_COMPILER_IS_Compaq 1

#elif defined(__IBMCPP__) && defined(__COMPILER_VER__)
# undef fiblib_COMPILER_IS_zOS
# define fiblib_COMPILER_IS_zOS 1

#elif defined(__ibmxl__) || (defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ >= 800)
# undef fiblib_COMPILER_IS_XL
# define fiblib_COMPILER_IS_XL 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ < 800
# undef fiblib_COMPILER_IS_VisualAge
# define fiblib_COMPILER_IS_VisualAge 1

#elif defined(__PGI)
# undef fiblib_COMPILER_IS_PGI
# define fiblib_COMPILER_IS_PGI 1

#elif defined(_CRAYC)
# undef fiblib_COMPILER_IS_Cray
# define fiblib_COMPILER_IS_Cray 1

#elif defined(__TI_COMPILER_VERSION__)
# undef fiblib_COMPILER_IS_TI
# define fiblib_COMPILER_IS_TI 1

#elif defined(__FUJITSU) || defined(__FCC_VERSION) || defined(__fcc_version)
# undef fiblib_COMPILER_IS_Fujitsu
# define fiblib_COMPILER_IS_Fujitsu 1

#elif defined(__SCO_VERSION__)
# undef fiblib_COMPILER_IS_SCO
# define fiblib_COMPILER_IS_SCO 1

#elif defined(__clang__) && defined(__apple_build_version__)
# undef fiblib_COMPILER_IS_AppleClang
# define fiblib_COMPILER_IS_AppleClang 1

#elif defined(__clang__)
# undef fiblib_COMPILER_IS_Clang
# define fiblib_COMPILER_IS_Clang 1

#elif defined(__GNUC__) || defined(__GNUG__)
# undef fiblib_COMPILER_IS_GNU
# define fiblib_COMPILER_IS_GNU 1

#elif defined(_MSC_VER)
# undef fiblib_COMPILER_IS_MSVC
# define fiblib_COMPILER_IS_MSVC 1

#elif defined(__VISUALDSPVERSION__) || defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
# undef fiblib_COMPILER_IS_ADSP
# define fiblib_COMPILER_IS_ADSP 1

#elif defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC)
# undef fiblib_COMPILER_IS_IAR
# define fiblib_COMPILER_IS_IAR 1

#elif defined(__ARMCC_VERSION)
# undef fiblib_COMPILER_IS_ARMCC
# define fiblib_COMPILER_IS_ARMCC 1

#elif defined(_SGI_COMPILER_VERSION) || defined(_COMPILER_VERSION)
# undef fiblib_COMPILER_IS_MIPSpro
# define fiblib_COMPILER_IS_MIPSpro 1


#endif

#  if fiblib_COMPILER_IS_AppleClang

#    if !(((__clang_major__ * 100) + __clang_minor__) >= 400)
#      error Unsupported compiler version
#    endif

# define fiblib_COMPILER_VERSION_MAJOR (__clang_major__)
# define fiblib_COMPILER_VERSION_MINOR (__clang_minor__)
# define fiblib_COMPILER_VERSION_PATCH (__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define fiblib_SIMULATE_VERSION_MAJOR (_MSC_VER / 100)
#  define fiblib_SIMULATE_VERSION_MINOR (_MSC_VER % 100)
# endif
# define fiblib_COMPILER_VERSION_TWEAK (__apple_build_version__)

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alignas)
#      define fiblib_COMPILER_CXX_ALIGNAS 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alignas)
#      define fiblib_COMPILER_CXX_ALIGNOF 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNOF 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_constexpr)
#      define fiblib_COMPILER_CXX_CONSTEXPR 1
#    else
#      define fiblib_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_override_control)
#      define fiblib_COMPILER_CXX_FINAL 1
#    else
#      define fiblib_COMPILER_CXX_FINAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_noexcept)
#      define fiblib_COMPILER_CXX_NOEXCEPT 1
#    else
#      define fiblib_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_nullptr)
#      define fiblib_COMPILER_CXX_NULLPTR 1
#    else
#      define fiblib_COMPILER_CXX_NULLPTR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_thread_local)
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  elif fiblib_COMPILER_IS_Clang

#    if !(((__clang_major__ * 100) + __clang_minor__) >= 301)
#      error Unsupported compiler version
#    endif

# define fiblib_COMPILER_VERSION_MAJOR (__clang_major__)
# define fiblib_COMPILER_VERSION_MINOR (__clang_minor__)
# define fiblib_COMPILER_VERSION_PATCH (__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define fiblib_SIMULATE_VERSION_MAJOR (_MSC_VER / 100)
#  define fiblib_SIMULATE_VERSION_MINOR (_MSC_VER % 100)
# endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_alignas)
#      define fiblib_COMPILER_CXX_ALIGNAS 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_alignas)
#      define fiblib_COMPILER_CXX_ALIGNOF 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNOF 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_constexpr)
#      define fiblib_COMPILER_CXX_CONSTEXPR 1
#    else
#      define fiblib_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_override_control)
#      define fiblib_COMPILER_CXX_FINAL 1
#    else
#      define fiblib_COMPILER_CXX_FINAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_noexcept)
#      define fiblib_COMPILER_CXX_NOEXCEPT 1
#    else
#      define fiblib_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_nullptr)
#      define fiblib_COMPILER_CXX_NULLPTR 1
#    else
#      define fiblib_COMPILER_CXX_NULLPTR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_thread_local)
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  elif fiblib_COMPILER_IS_GNU

#    if !((__GNUC__ * 100 + __GNUC_MINOR__) >= 404)
#      error Unsupported compiler version
#    endif

# if defined(__GNUC__)
#  define fiblib_COMPILER_VERSION_MAJOR (__GNUC__)
# else
#  define fiblib_COMPILER_VERSION_MAJOR (__GNUG__)
# endif
# if defined(__GNUC_MINOR__)
#  define fiblib_COMPILER_VERSION_MINOR (__GNUC_MINOR__)
# endif
# if defined(__GNUC_PATCHLEVEL__)
#  define fiblib_COMPILER_VERSION_PATCH (__GNUC_PATCHLEVEL__)
# endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define fiblib_COMPILER_CXX_ALIGNAS 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNAS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define fiblib_COMPILER_CXX_ALIGNOF 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNOF 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define fiblib_COMPILER_CXX_CONSTEXPR 1
#    else
#      define fiblib_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define fiblib_COMPILER_CXX_FINAL 1
#    else
#      define fiblib_COMPILER_CXX_FINAL 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define fiblib_COMPILER_CXX_NOEXCEPT 1
#    else
#      define fiblib_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define fiblib_COMPILER_CXX_NULLPTR 1
#    else
#      define fiblib_COMPILER_CXX_NULLPTR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  elif fiblib_COMPILER_IS_MSVC

#    if !(_MSC_VER >= 1600)
#      error Unsupported compiler version
#    endif

  /* _MSC_VER = VVRR */
# define fiblib_COMPILER_VERSION_MAJOR (_MSC_VER / 100)
# define fiblib_COMPILER_VERSION_MINOR (_MSC_VER % 100)
# if defined(_MSC_FULL_VER)
#  if _MSC_VER >= 1400
    /* _MSC_FULL_VER = VVRRPPPPP */
#   define fiblib_COMPILER_VERSION_PATCH (_MSC_FULL_VER % 100000)
#  else
    /* _MSC_FULL_VER = VVRRPPPP */
#   define fiblib_COMPILER_VERSION_PATCH (_MSC_FULL_VER % 10000)
#  endif
# endif
# if defined(_MSC_BUILD)
#  define fiblib_COMPILER_VERSION_TWEAK (_MSC_BUILD)
# endif

#    if _MSC_VER >= 1900
#      define fiblib_COMPILER_CXX_ALIGNAS 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNAS 0
#    endif

#    if _MSC_VER >= 1900
#      define fiblib_COMPILER_CXX_ALIGNOF 1
#    else
#      define fiblib_COMPILER_CXX_ALIGNOF 0
#    endif

#    if _MSC_VER >= 1900
#      define fiblib_COMPILER_CXX_CONSTEXPR 1
#    else
#      define fiblib_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if _MSC_VER >= 1700
#      define fiblib_COMPILER_CXX_FINAL 1
#    else
#      define fiblib_COMPILER_CXX_FINAL 0
#    endif

#    if _MSC_VER >= 1900
#      define fiblib_COMPILER_CXX_NOEXCEPT 1
#    else
#      define fiblib_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if _MSC_VER >= 1600
#      define fiblib_COMPILER_CXX_NULLPTR 1
#    else
#      define fiblib_COMPILER_CXX_NULLPTR 0
#    endif

#    if _MSC_VER >= 1900
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define fiblib_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if _MSC_VER >= 1900
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define fiblib_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#  else
#    error Unsupported compiler
#  endif

#  if defined(fiblib_COMPILER_CXX_ALIGNAS) && fiblib_COMPILER_CXX_ALIGNAS
#    define fiblib_ALIGNAS(X) alignas(X)
#  elif fiblib_COMPILER_IS_GNU || fiblib_COMPILER_IS_Clang || fiblib_COMPILER_IS_AppleClang
#    define fiblib_ALIGNAS(X) __attribute__ ((__aligned__(X)))
#  elif fiblib_COMPILER_IS_MSVC
#    define fiblib_ALIGNAS(X) __declspec(align(X))
#  else
#    define fiblib_ALIGNAS(X)
#  endif


#  if defined(fiblib_COMPILER_CXX_ALIGNOF) && fiblib_COMPILER_CXX_ALIGNOF
#    define fiblib_ALIGNOF(X) alignof(X)
#  elif fiblib_COMPILER_IS_GNU || fiblib_COMPILER_IS_Clang || fiblib_COMPILER_IS_AppleClang
#    define fiblib_ALIGNOF(X) __alignof__(X)
#  elif fiblib_COMPILER_IS_MSVC
#    define fiblib_ALIGNOF(X) __alignof(X)
#  endif


#  if defined(fiblib_COMPILER_CXX_CONSTEXPR) && fiblib_COMPILER_CXX_CONSTEXPR
#    define fiblib_CONSTEXPR constexpr
#  else
#    define fiblib_CONSTEXPR 
#  endif


#  if defined(fiblib_COMPILER_CXX_FINAL) && fiblib_COMPILER_CXX_FINAL
#    define fiblib_FINAL final
#  else
#    define fiblib_FINAL 
#  endif


#  if defined(fiblib_COMPILER_CXX_NOEXCEPT) && fiblib_COMPILER_CXX_NOEXCEPT
#    define fiblib_NOEXCEPT noexcept
#    define fiblib_NOEXCEPT_EXPR(X) noexcept(X)
#  else
#    define fiblib_NOEXCEPT
#    define fiblib_NOEXCEPT_EXPR(X)
#  endif


#  if defined(fiblib_COMPILER_CXX_NULLPTR) && fiblib_COMPILER_CXX_NULLPTR
#    define fiblib_NULLPTR nullptr
#  elif fiblib_COMPILER_IS_GNU
#    define fiblib_NULLPTR __null
#  else
#    define fiblib_NULLPTR 0
#  endif


#  if defined(fiblib_COMPILER_CXX_THREAD_LOCAL) && fiblib_COMPILER_CXX_THREAD_LOCAL
#    define fiblib_THREAD_LOCAL thread_local
#  elif fiblib_COMPILER_IS_GNU || fiblib_COMPILER_IS_Clang || fiblib_COMPILER_IS_AppleClang
#    define fiblib_THREAD_LOCAL __thread
#  elif fiblib_COMPILER_IS_MSVC
#    define fiblib_THREAD_LOCAL __declspec(thread)
#  else
// fiblib_THREAD_LOCAL not defined for this configuration.
#  endif

#endif

#endif
