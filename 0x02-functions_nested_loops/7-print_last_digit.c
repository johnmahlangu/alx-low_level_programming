#include "main.h"
/**
 * print_last_digit - print last digit
 * @c: number
 * Return: 0
 */
int print_last_digit(int c)
{
	int i = c % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
