#ifndef UNMAPPED_H
#define UNMAPPED_H
#include <cstdint>


class Cartridge {
    private:
        uint8_t ram[0x2000];
        uint8_t rom[0x8000];
    public:
        Cartridge();
        uint8_t getRamCartridge();
        uint8_t getRomCartridge();

};



#endif //UNMAPPED_H
