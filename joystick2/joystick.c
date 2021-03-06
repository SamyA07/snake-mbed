/*
<generator>
<handlers init="doInit" doGet="doGet"/>
<properties interaction="streaming" channel="joystick_push"/>
</generator>
*/

/* simple contents generator */
#include "generators.h"
#include "channels.h"
#include "timers.h"

static char doGet(struct args_t *args) {
	//BAS
	if(rflpc_gpio_get_pin(MBED_DIP12)){
	out_uint(40);
	}
	//GAUCHE
	if(rflpc_gpio_get_pin(MBED_DIP13)){
	out_uint(37);
	}
	// HAUT
	if(rflpc_gpio_get_pin(MBED_DIP15)){
	out_uint(38);
	}
	//DROITE
	if(rflpc_gpio_get_pin(MBED_DIP16)){
	out_uint(39);
	}
	return 1;
}


static void change_state(){
	server_push(&joystick_push);
}

static char doInit(void){
	rflpc_pin_set(MBED_DIP12, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
	rflpc_pin_set(MBED_DIP13, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
	rflpc_pin_set(MBED_DIP14, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
	rflpc_pin_set(MBED_DIP15, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
	rflpc_pin_set(MBED_DIP16, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
	set_timer(change_state,100);
        return 1;
}


