#ifndef _SCALELIB_SCALE_H
#define _SCALELIB_SCALE_H

#ifdef WIN32
#include <windows.h>
#endif

#ifdef __cplusplus
#include <cmath>
namespace scalelib::scale{
#else
#include <math.h>
#endif

#define d_ratio 1.0594630943592953
#define d_c0std 233
#ifndef __cplusplus
unsigned int c0std = d_c0std;
#endif

enum scales_id{
    C0, Cs0, D0, Ds0, E0, F0, Fs0, G0, Gs0, A0, As0, B0,
    C1, Cs1, D1, Ds1, E1, F1, Fs1, G1, Gs1, A1, As1, B1,
    C2, Cs2, D2, Ds2, E2, F2, Fs2, G2, Gs2, A2, As2, B2,
    C3, Cs3, D3, Ds3, E3, F3, Fs3, G3, Gs3, A3, As3, B3,
    C4, Cs4, D4, Ds4, E4, F4, Fs4, G4, Gs4, A4, As4, B4,
    C5, Cs5, D5, Ds5, E5, F5, Fs5, G5, Gs5, A5, As5, B5,
    C6, Cs6, D6, Ds6, E6, F6, Fs6, G6, Gs6, A6, As6, B6,
    C7, Cs7, D7, Ds7, E7, F7, Fs7, G7, Gs7, A7, As7, B7,
    C8, Cs8, D8, Ds8, E8, F8, Fs8, G8, Gs8, A8, As8, B8,
    scale_null
};

#ifdef __cplusplus
template<unsigned int c0std=d_c0std>
#endif
unsigned int scale_to_frequency(enum scales_id scalename){
    const double up_ratio = d_ratio;
    return((int)round((double)(c0std)*pow(up_ratio, (double)(scalename))));
}

#ifdef WIN32
#ifdef __cplusplus
template<unsigned int c0std=d_c0std>
#endif
WINBOOL scale_beep(enum scales_id scalename, DWORD time){
    if(scalename==scale_null){
        Sleep(time);
        return(1);
    }
    else
#ifdef __cplusplus
    return(Beep(scale_to_frequency<c0std>(scalename), time));
#else
    return(Beep(scale_to_frequency(scalename), time));
#endif
}
#endif

#undef d_ratio
#undef d_c0std

#ifdef __cplusplus
}
#endif

#endif
