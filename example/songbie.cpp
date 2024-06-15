#include "../src/scalelib.h"

using namespace std;
using namespace scalelib::all;

int main(){
    vector<music_unit> music = {
        {scale_null, 1},
        {G3, 2}, {E3, 1}, {G3, 1}, {C4, 3}, {scale_null, 1},
        {A3, 2}, {C4, 1}, {A3, 1}, {G3, 3}, {scale_null, 1},
        {G3, 2}, {C3, 1}, {D3, 1}, {E3, 3}, {D3, 1}, {C3, 1}, {D3, 4}, {scale_null, 1},

        {G3, 2}, {E3, 1}, {G3, 1}, {C4, 3}, {B3, 1}, {A3, 2}, {C4, 2}, {G3, 3}, {scale_null, 1},
        {G3, 2}, {D3, 1}, {E3, 1}, {F3, 3}, {B2, 1}, {C3, 4}, {scale_null, 1},

        {A3, 2}, {C4, 2}, {C4, 3}, {B3, 2}, {A3, 1}, {B3, 1}, {C4, 3}, {scale_null, 1},
        {A3, 1}, {B3, 1}, {C4, 1}, {A3, 1}, {A3, 1}, {G3, 1}, {E3, 1}, {C3, 1}, {D3, 4}, {scale_null, 1},

        {G3, 2}, {E3, 1}, {G3, 1}, {C4, 3}, {B3, 1}, {A3, 2}, {C4, 2}, {G3, 3}, {scale_null, 1},
        {G3, 2}, {D3, 1}, {E3, 1}, {F3, 3}, {B2, 1}, {C3, 4}, {scale_null, 1}
    };
    music_play<500>(music);
    return 0;
}
