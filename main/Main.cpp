/*
Update the included file based on the device you are using.
Please refer to the "devices" folder for a list of supported devices.
*/
#include "conf_WT32SCO1-Plus.h"



LGFX display;

extern "C" void app_main(void){

    printf("Hello World... \n");
    display.init();
    display.setTextSize((std::max(display.width(), display.height()) + 255) >> 8);
    display.setTextDatum(textdatum_t::middle_center);
    display.drawString("Hello World...", display.width()>>1, display.height() >> 1);
 
}

    