#include "Cpu.h"

Cpu::Cpu()
{
    a = 0;
    x = 0;
    y = 0;
    pc = 0xFFFC;
    sp = 0xFD;
    st.c = 0;
    st.z = 0;
    st.i = 1;
    st.d = 0;
    st.v = 0;
    st.n = 0;
}

uint8_t Cpu::getSt()
{
    return (st.n << 7) | (st.v << 6) | (1 << 5) | (st.b << 4) | (st.d << 3) | (st.i << 2) | (st.z << 1) | (st.c) ;
}
