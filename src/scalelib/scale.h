#ifndef _SCALELIB_SCALE_H
#define _SCALELIB_SCALE_H

#include "error_check.h"
#include "sys_interface.h"

#include <cmath>

namespace scalelib::scale{

#define d_ratio 1.0594630943592953
#define d_c0std 233

typedef unsigned char scales_id_type;

enum scales_id : scales_id_type{
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

template<unsigned int c0std=d_c0std>
unsigned int scale_to_frequency(enum scales_id scalename){
    const double up_ratio = d_ratio;
    return((int)round((double)(c0std)*pow(up_ratio, (double)(scalename))));
}

template<unsigned int c0std=d_c0std>
int scale_beep(enum scales_id scalename, unsigned int time){
    if(scalename==scale_null){
        sys_interface::sleep(time);
        return(1);
    }
    else return(sys_interface::beep(scale_to_frequency<c0std>(scalename), time));
}

#define _sound(sound, scale_id) case sound:scale=scale_id;break;
template<unsigned int c0std=d_c0std>
int scale_beep_high(float sound, int octive, unsigned int time){
    if(sound==0)return(scale_beep<c0std>(scale_null, time));
    else{
        scales_id_type scale;
        switch ((int)(sound*10)){
            _sound(10, C0)
            _sound(15, Cs0)
            _sound(20, D0)
            _sound(25, Ds0)
            _sound(30, E0)
            _sound(40, F0)
            _sound(45, Fs0)
            _sound(50, G0)
            _sound(55, Gs0)
            _sound(60, A0)
            _sound(65, As0)
            _sound(70, B0)
            default:
                return(0);
                break;
        }
        scale += C3;
        scale += C1*octive;
        if(scale>=scale_null)return(0);
        else return(scale_beep<c0std>((enum scales_id)(scale), time));
    }
}
#undef _sound

#undef d_ratio
#undef d_c0std
}
#endif
