#ifndef _SCALELIB_SYS_INTERFACE_H
#define _SCALELIB_SYS_INTERFACE_H

#ifdef _WIN32
#include <windows.h>
#endif

#ifdef __linux__
//#include <unistd.h>
//#include <linux/input.h>
#endif

namespace scalelib::sys_interface{

#ifdef __WIN32
void sleep(unsigned int ms){
    Sleep(ms);
}
int beep(unsigned int freq, unsigned int ms){
    return Beep(freq, ms);
}
#endif

#ifdef __linux__
/*void sleep(unsigned int ms){
    sleep(ms);
}*/
#endif

}

#endif
