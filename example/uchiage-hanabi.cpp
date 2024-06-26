#include "../src/scalelib.h"

using namespace std;
using namespace scalelib::all;

#define no_interludes
//#define original
#define bpm 120//96

int main(){
    vector<music_unit_high> music = {
        #ifndef no_interludes
        {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1},
        {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {6, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {6, 0, 8, 1}, {1, 1, 8, 1},
        {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1},
        {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {6, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {6, 0, 8, 1}, {1, 1, 8, 1},

        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1},
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1},
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1},
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1},
        #endif


        {3, -1, 8, 1}, {5, -1, 8, 1},

        {6, -1, 4, 1}, {1, 0, 8, 1}, {2, 0, 4, 1}, {1, 0, 8, 1}, {5, -1, 8, 1}, {4, -1, 8, 1},
        #ifdef original
        {3, -1, 8, 1}, {5, -1, 8, 1}, {1, 0, 4, 1}, {0, 0, 4, 1}, {1, 0, 8, 1}, {7, -1, 8, 1},
        #else
        {3, -1, 8, 1}, {5, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 4, 1}, {0, 0, 8, 1}, {1, 0, 8, 1}, {7, -1, 8, 1},
        #endif
        {6, -1, 4, 1}, {1, 0, 4, 1}, {7, -1, 8, 1}, {5, -1, 4, 1}, {5, -1, 4, 1.5}, {0, 0, 2, 1}, {3, -1, 8, 1}, {5, -1, 8, 1},

        {6, -1, 4, 1}, {1, 0, 8, 1}, {2, 0, 4, 1}, {1, 0, 8, 1}, {5, -1, 8, 1}, {4, -1, 8, 1},
        {3, -1, 8, 1}, {5, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 4, 1}, {0, 0, 8, 1}, {1, 0, 8, 1}, {7, -1, 8, 1},
        #ifdef original
        {6, -1, 4, 1}, {1, 0, 4, 1}, {7, -1, 8, 1}, {5, -1, 8, 1}, {5, -1, 8, 1}, {5, -1, 8, 1},
        #else
        {6, -1, 4, 1}, {1, 0, 4, 1}, {7, -1, 8, 1}, {5, -1, 8, 1}, {5, -1, 8, 1},
        #endif
        {6, -1, 4, 1}, {0, 0, 2, 1}, {6, -1, 8, 1}, {7, -1, 8, 1},

        {1, 0, 4, 1.5}, {7, -1, 8, 1}, {6, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 4, 1},
        {0, 0, 8, 1}, {7, -1, 8, 1}, {6, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 8, 1}, {7, -1, 8, 1}, {5, -1, 8, 1}, {6, -1, 8, 1},
        #ifdef original
        {5, -1, 8, 1}, {1, -1, 8, 1}, {1, -1, 8, 1}, {6, -1, 8, 1}, {5, -1, 8, 1}, {1, -1, 8, 1}, {2, -1, 8, 1}, {2, -1, 8, 1},
        #else
        {5, -1, 8, 1}, {1, -1, 8, 1}, {1, -1, 8, 1}, {6, -1, 8, 1}, {5, -1, 8, 1}, {1, -1, 8, 1}, {2, -1, 8, 1},
        #endif
        {3, -1, 4, 1}, {0, 0, 2, 1}, {6, -1, 8, 1}, {7, -1, 8, 1},

        {1, 0, 4, 1.5}, {7, -1, 8, 1}, {6, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 4, 1},
        #ifdef original
        {0, 0, 8, 1}, {7, -1, 8, 1}, {6, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {4, 0, 8, 1},
        #else
        {0, 0, 8, 1}, {7, -1, 8, 1}, {6, -1, 8, 1}, {7, -1, 8, 1}, {1, 0, 8, 1}, {2, 0, 16, 1}, {3, 0, 16, 1}, 
        #endif
        {4, 0, 8, 1}, {1, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 16, 1}, {3, 0, 16, 1}, {2, 0, 8, 1}, {1, 0, 8, 1}, {1, 0, 4, 1},
        {0, 0, 2, 1.5}, {3, 0, 8, 1}, {5, 0, 16, 1}, {3, 0, 16, 1},

        {2, 0, 8, 1}, {1, 0, 8, 1}, {6, -1, 16, 1}, {1, 0, 8, 1}, {2, 0, 8, 1.5}, {0, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 16, 1}, {3, 0, 16, 1},
        {2, 0, 8, 1}, {1, 0, 8, 1}, {5, -1, 16, 1}, {1, 0, 8, 1}, {1, 0, 8, 1.5}, {0, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 16, 1}, {3, 0, 16, 1},
        {2, 0, 8, 1}, {0, 0, 8, 1}, {3, 0, 16, 1}, {5, 0, 8, 1}, {5, 0, 8, 1}, {6, 0, 8, 1.5}, {5, 0, 16, 1}, {4, 0, 16, 1},

        {3, 0, 4, 2.5}, {0, 0, 4, 1}, {3, 0, 8, 1}, {5, 0, 16, 1}, {3, 0, 16, 1},
        {2, 0, 8, 1}, {1, 0, 8, 1}, {6, -1, 16, 1}, {1, 0, 8, 1}, {2, 0, 8, 1.5}, {0, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 16, 1}, {3, 0, 16, 1},
        {2, 0, 8, 1}, {1, 0, 8, 1}, {6, -1, 16, 1}, {1, 0, 8, 1}, {1, 0, 8, 1.5}, {0, 0, 8, 1}, {1, 0, 16, 1}, {7, -1, 16, 1}, {6, -1, 16, 1}, {7, -1, 16, 1},
        {6, -1, 4, 1.5}, {2, 0, 4, 1.5}, {7, -1, 8, 1}, {6, -1, 8, 1}, {7, -1, 8, 1},

        {7, -1, 4, 1}, {1, 0, 4, 2.5}, {0, 0, 4, 1},


        #ifndef no_interludes
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1},
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1},
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1},
        {2, 0, 8, 1}, {3, 0, 8, 1}, {5, 0, 8, 1}, {1, 0, 8, 1}, {2, 0, 8, 1}, {3, 0, 8, 1},
        #endif


        {0, 0, 8, 1}, {1, 0, 16, 1}, {2, 0, 16, 1},
        {3, 0, 8, 1}, {2, 0, 16, 1}, {1, 0, 16, 1}, {1, 0, 8, 1}, {6, -1, 16, 1}, {7, -1, 16, 1}, {1, 0, 8, 1}, {7, -1, 16, 1}, {6, -1, 16, 1}, {5, 0, 8, 1}, {3, -1, 16, 1}, {5, -1, 16, 1},
        {6, -1, 8, 1}, {7, -1, 16, 1}, {1, 0, 8, 1}, {7, -1, 16, 1}, {5, -1, 16, 1}, {5, -1, 16, 1}, {6, -1, 16, 1}, {5, -1, 4, 1}, {3, -1, 16, 1}, {3, -1, 16, 1}, {5, -1, 16, 1}, {5, -1, 16, 1},

        {6, -1, 8, 1}, {7, -1, 16, 1}, {1, 0, 16, 1}, {7, -1, 8, 1}, {1, 0, 16, 1}, {2, 0, 16, 1}, {3, 0, 8, 1}, {2, 0, 16, 1}, {1, 0, 16, 1}, {7, -1, 8, 1}, {5, -1, 16, 1}, {5, -1, 8, 2.5},
        {0, 0, 4, 2.5}, {1, 0, 16, 1}, {2, 0, 16, 1},
        {3, 0, 8, 1}, {2, 0, 16, 1}, {1, 0, 16, 1}, {1, 0, 8, 1}, {6, -1, 16, 1}, {7, -1, 16, 1}, {1, 0, 8, 1}, {7, -1, 16, 1}, {6, -1, 16, 1}, {5, 0, 8, 1}, {5, -1, 16, 1}, {5, -1, 16, 1},
    };
    music_play_high<bpm>(music);
    return 0;
}
