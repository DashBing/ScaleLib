#ifndef _SCALELIB_ERROR_CHECK_H
#define _SCALELIB_ERROR_CHECK_H

#ifdef __cplusplus

#if __cplusplus < 201700
#error Your C++ standard version is too low to support!
#endif

#if defined(__WIN32) || defined(__linux__)
#define _SCALELIB_PLATFORM_CHECK_AC
#endif

#else
#error Removed support for C codes
#endif
#endif
