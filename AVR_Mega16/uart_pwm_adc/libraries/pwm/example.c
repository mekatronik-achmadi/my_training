#include <avr/io.h>

#include "pwm.h"

int main(void){
	pwm_init();
	OCR0 = 128;

	while(1);
    return 0;
}

