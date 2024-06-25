#ifndef _SCALELIB_ERROR_CHECK_H
#define _SCALELIB_ERROR_CHECK_H

#ifdef __cplusplus

#if __cplusplus < 201700
#error Your C++ standard version is too low to support!
#endif

#ifdef __linux__
#error Sorry there are some problems with the Linux version
#endif

#if defined(_WIN32)
#define _SCALELIB_PLATFORM_CHECK_AC
#endif

#else
#error Removed support for C codes
#endif
#endif
