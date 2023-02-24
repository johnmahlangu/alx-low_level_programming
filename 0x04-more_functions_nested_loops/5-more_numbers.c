#include "main.h"
/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i = 0, k;

	while (i <= 9)
	{
		k = 0;
		while (k <= 14)
		{
			if (k >= 10)
			{
				_putchar('1');
			}
			_putchar(k % 10 + '0');
			k++;
		}
		i++;
		_putchar('\n');
	}
}
