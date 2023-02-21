#include "main.h"
/**
 * print_alphabet_x10 - many
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i = '0', j;

	while (i <= '9')
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
		}		
	_putchar('\n');		
	}
}
