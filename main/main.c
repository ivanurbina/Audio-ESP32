#include "Driver_DAC_E1.h"
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
//#include "Santa.h"
#include "Jingle_bells.h"
void app_main(void)
{
	Dac_enable_CH(DAC_CANAL_1);
    while (true)
    {
    	//R_jingle_bells();
    	//R_santa();
    	//Triangle_DAC(DAC_CANAL_1,F_1Hz);
    	//Triangle_DAC(DAC_CANAL_1,F_5Hz);
    	//Triangle_DAC(DAC_CANAL_1,F_10Hz);
    	//Triangle_DAC(DAC_CANAL_1,F_100Hz);

    	//Cos_DAC(DAC_CANAL_1,F_1Hz);
		//Cos_DAC(DAC_CANAL_1,F_5Hz);
		//Cos_DAC(DAC_CANAL_1,F_10Hz);
		//Cos_DAC(DAC_CANAL_1,F_100Hz);

		//Square_DAC(DAC_CANAL_1,F_1Hz);
		//Square_DAC(DAC_CANAL_1,F_5Hz);
		//Square_DAC(DAC_CANAL_1,F_10Hz);
		Square_DAC(DAC_CANAL_1,F_100Hz);

    	//Sin_DAC(DAC_CANAL_1,F_1Hz);
		//Sin_DAC(DAC_CANAL_1,F_5Hz);
		//Sin_DAC(DAC_CANAL_1,F_10Hz);

		//Sin_DAC(DAC_CANAL_1,F_100Hz);
    }
}
