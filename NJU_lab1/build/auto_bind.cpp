#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->SW0, 1, SW0);
	nvboard_bind_pin( &top->SW1, 1, SW1);
	nvboard_bind_pin( &top->SW2, 1, SW2);
	nvboard_bind_pin( &top->SW3, 1, SW3);
	nvboard_bind_pin( &top->SW4, 1, SW4);
	nvboard_bind_pin( &top->SW5, 1, SW5);
	nvboard_bind_pin( &top->SW6, 1, SW6);
	nvboard_bind_pin( &top->SW7, 1, SW7);
	nvboard_bind_pin( &top->SW8, 1, SW8);
	nvboard_bind_pin( &top->SW9, 1, SW9);
	nvboard_bind_pin( &top->LEDR0, 1, LD0);
	nvboard_bind_pin( &top->LEDR1, 1, LD1);
}
