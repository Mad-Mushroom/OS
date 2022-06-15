#pragma once
#include <stdint.h>

namespace QWERTYKeyboard{

    #define LeftShift 0x2A
    #define RightShift 0x36
    #define Enter 0x1C
    #define BackSpace 0x0E
    #define Spacebar 0x39
    #define F4 0x3E
    #define F8 0x42

    extern const char ASCIITable[];
    char Translate(uint8_t scancode, bool uppercase);
}