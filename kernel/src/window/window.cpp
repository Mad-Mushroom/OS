#include "window.h"

 uint8_t Window[] = {
    0b11111111, 0b11111111,
    0b11111111, 0b11111111,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b10000000, 0b00000001,
    0b11111111, 0b11111111,
};

void drawWindow(unsigned int X, unsigned int Y){
    Point windowPosition = {X,Y};
    GlobalRenderer->DrawArray(Window, windowPosition, 0xffffffff);
}