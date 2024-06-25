#ifndef _SCALELIB_MUSICPLAYER_H
#define _SCALELIB_MUSICPLAYER_H

#include "error_check.h"
#include "scale.h"

#include <cmath>
#include <vector>
#include <thread>

namespace scalelib::musicplayer{

struct music_unit{
    scalelib::scale::scales_id scale;
    unsigned int time;
};

struct music_unit_high{
    float sound;
    int octave;
    unsigned int note_type;
    double note_times;
};

#ifdef _SCALELIB_PLATFORM_CHECK_AC
void music_play_low(std::vector<music_unit> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, i.time);
    }
}

template<unsigned int beat_length=1>
void music_play(std::vector<music_unit> music){
    for(auto i : music){
        scalelib::scale::scale_beep(i.scale, i.time*beat_length);
    }
}

template<unsigned int bpm=120>
void music_play_high(std::vector<music_unit_high> music){
    for(auto i : music){
        scalelib::scale::scale_beep_high(i.sound, i.octave, floor(60/(double)(bpm)*4000/i.note_type*i.note_times));
    }
}

void free_threads(std::vector<std::thread *> threads){
    for(auto i : threads){
        delete i;
    }
}

std::vector<std::thread *> note_play_low(std::vector<std::vector<music_unit>> note){
    std::vector<std::thread *> t_list;
    for(auto i : note){
        std::thread* t = new std::thread([&i]{
            music_play_low(i);
        });
        t_list.push_back(t);
    }
    return(t_list);
}

template<unsigned int beat_length=1>
std::vector<std::thread *> note_play(std::vector<std::vector<music_unit>> note){
    std::vector<std::thread *> t_list;
    for(auto i : note){
        std::thread* t = new std::thread([&i]{
            music_play<beat_length>(i);
        });
        t_list.push_back(t);
    }
    return(t_list);
}

template<unsigned int whole_note_length=2000>
std::vector<std::thread *> note_play_high(std::vector<std::vector<music_unit_high>> note){
    std::vector<std::thread *> t_list;
    for(auto i : note){
        std::thread* t = new std::thread([&i]{
            music_play_high<whole_note_length>(i);
        });
        t_list.push_back(t);
    }
    return(t_list);
}

#endif
}
#endif
