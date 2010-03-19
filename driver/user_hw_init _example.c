#include "include/part.h"
#include "include/gpio.h"
#include "include/pmc.h"
#include "include/debug.h"
#include "include/main.h"

void	user_hw_init(void)
{
	/* 
	 * This is a placeholder for the users custom init routine
	 * Overwrite this file with your own routine to init
	 * your own H/W features.
	 */
	const struct pio_desc hw_pio[] = {
		{"BacklightEnable",  AT91C_PIN_PA(16), 0,  PIO_DEFAULT, PIO_PERIPH_A},
		{(char *) 0, 0, 0, PIO_DEFAULT, PIO_PERIPH_A},
	};
	/* Configure the PIO controller to output PCK0 */
	pio_setup(hw_pio);
	pio_set_value(AT91C_PIN_PA(16), 0);  // Backlight off.
}

