#include <avr/io.h>

#include "adc.h"

unsigned char vADC

int main(void){
	vADC = adc_read(0);

	while(1);
    return 0;
}
