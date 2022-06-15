#include "panic.h"
#include "BasicRenderer.h"

void Panic(const char* panicMessage){
    GlobalRenderer->ClearColour = 0x00ff0000;
    GlobalRenderer->Clear();
    GlobalRenderer->CursorPosition = {0, 0};
    GlobalRenderer->Colour = 0;
    GlobalRenderer->Print("Kernel Panic");
    GlobalRenderer->Next();
    GlobalRenderer->Next();
    GlobalRenderer->Print(panicMessage);
    GlobalRenderer->Next();
    GlobalRenderer->Next();
}

void fError(const char* errorMessage){
    GlobalRenderer->ClearColour = 0x00ff0000;
    GlobalRenderer->Clear();
    GlobalRenderer->CursorPosition = {0, 0};
    GlobalRenderer->Colour = 0;
    GlobalRenderer->Print("Fatal System Error!");
    GlobalRenderer->Next();
    GlobalRenderer->Next();
    GlobalRenderer->Print(errorMessage);
    GlobalRenderer->Next();
    GlobalRenderer->Next();
}

void Message(const char* Message){
    GlobalRenderer->Next();
    GlobalRenderer->Print("System Message:");
    GlobalRenderer->Next();
    GlobalRenderer->Next();
    GlobalRenderer->Print(Message);
    GlobalRenderer->Next();
}