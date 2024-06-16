#include "../src/scalelib.h"

using namespace std;
using namespace scalelib::all;

int main(){
    vector<vector<music_unit_high>> music = {
        {
            {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1},
            {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {6, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {6, 0, 8, 1}, {1, 1, 8, 1}
        }
    };
    note_play_high(music);
    Sleep(16*250);
    /* vector<music_unit_high> music = {
        {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {1, 1, 8, 1},
        {2, 1, 8, 1}, {3, 1, 8, 1}, {5, 1, 8, 1}, {6, 1, 8, 1}, {2, 1, 8, 1}, {3, 1, 8, 1}, {6, 0, 8, 1}, {1, 1, 8, 1}
    };
    music_play_high(music); */
    return 0;
}
