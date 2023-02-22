#include "main.h"
/**
 * jack_bauer
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = '00', minutes;

	while (hours <= '23')
	{
		minutes = '00';
		while (minutes <= '59')
		{
			_putchar(minutes);
			_putchar(':');
			minutes++;
		}
		_putchar(hours);
		hours++;
	}
}
