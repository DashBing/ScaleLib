#ifndef _SCALELIB_MUSICPLAYER_H
#define _SCALELIB_MUSICPLAYER_H

#include "scale.h"

#ifdef __cplusplus
#include <vector>
namespace scalelib::musicplayer{

struct music_unit{
    scalelib::scale::scales_id scale;
    unsigned int time;
};

#ifdef WIN32
void music_play(std::vector<music_unit> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, i.time);
    }
}
void music_play_4long(std::vector<music_unit> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, i.time*500);
    }
}
#endif

}
#else

#include <stdlib.h>

struct music_unit{
    scales_id scale;
    unsigned int time;
};

struct music_table{
    struct music_unit * adress;
    unsigned long long length;
}

#ifdef WIN32
void music_play(struct music_table music){
    for(unsigned long long i = 0; i<music.length; i++){
        scale_beep(music.adress[i].scale, music.adress[i].time);
    }
}
#endif

#endif

#endif
