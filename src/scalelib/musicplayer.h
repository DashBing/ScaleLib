#ifndef _SCALELIB_MUSICPLAYER_H
#define _SCALELIB_MUSICPLAYER_H

#include "error_check.h"
#include "scale.h"

#ifdef __cplusplus
#include <cmath>
#include <vector>

namespace scalelib::musicplayer{

struct music_unit{
    scalelib::scale::scales_id scale;
    unsigned int time;
};

struct music_unit_high{
    scalelib::scale::scales_id scale;
    unsigned int note_type;
    double note_times;
};

#ifdef WIN32
template<unsigned int whole_note_length=2000>
void music_play_high(std::vector<music_unit_high> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, floor(whole_note_length/i.note_type*i.note_times));
    }
}

template<unsigned int beat_length=1>
void music_play(std::vector<music_unit> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, i.time*beat_length);
    }
}

void music_play_low(std::vector<music_unit> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, i.time);
    }
}
#endif

}
#else

#include <math.h>
#include <stdlib.h>

struct music_unit{
    scales_id scale;
    unsigned int time;
};

struct music_unit_high{
    scales_id scale;
    unsigned int note_type;
    double note_times;
};

struct music_table{
    struct music_unit * adress;
    unsigned long long length;
}

struct music_table_high{
    struct music_unit_high * adress;
    unsigned long long length;
}

#ifdef WIN32

unsigned int whole_note_length=2000;

void music_play_high(struct music_table_high music){
    for(unsigned long long i = 0; i<music.length; i++){
        scale_beep(music.adress[i].scale, floor(whole_note_length/music.adress[i].note_type*note_times));
    }
}

void music_play(struct music_table music){
    for(unsigned long long i = 0; i<music.length; i++){
        scale_beep(music.adress[i].scale, music.adress[i].time);
    }
}
#endif

#endif

#endif
