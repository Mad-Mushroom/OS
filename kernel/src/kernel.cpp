#include "kernelUtil.h"
#include "./window/window.h"

void startup(){
    GlobalRenderer->ClearColour = 0;
    GlobalRenderer->CursorPosition = {(GlobalRenderer->TargetFramebuffer->Width / 2),(GlobalRenderer->TargetFramebuffer->Height / 2)};
    GlobalRenderer->Print("Loading...");
    GlobalRenderer->Clear();
    GlobalRenderer->CursorPosition = {0,0};
    GlobalRenderer->ClearColour = 0x00b0b0;
    GlobalRenderer->Clear();
    GlobalRenderer->Print("Codename Pluto [Version 0.5.5]");
    GlobalRenderer->Next();
    GlobalRenderer->Next();
}

extern "C" void _start(BootInfo* bootInfo){

    KernelInfo kernelInfo = InitializeKernel(bootInfo);
    PageTableManager* pageTableManager = kernelInfo.pageTableManager;

    startup();

    drawWindow(100,100);

    while(true){
        ProcessMousePacket();
    }

    while(true);
}