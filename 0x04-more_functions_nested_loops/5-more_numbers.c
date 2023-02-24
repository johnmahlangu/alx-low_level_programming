#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0, k;

	while (i <= 9)
	{
		k = 0;
		while (k <= 13)
		{
			_putchar(i);
			_putchar(k);
			k++;
		}
		i++;
	}

	_putchar('\n');
}
