#include <cstdint>
#include <locale>
#ifndef CPU_H
#define CPU_H

typedef struct
{
    bool c;
    bool z;
    bool i;
    bool d;
    bool v;
    bool n;
    bool b;
}statusFlag;

class Cpu {
    public:
        uint8_t a;
        uint8_t x;
        uint8_t y;
        uint16_t pc;
        uint8_t sp;
        statusFlag st;
        Cpu();
        uint8_t getSt();
};



#endif //CPU_H
