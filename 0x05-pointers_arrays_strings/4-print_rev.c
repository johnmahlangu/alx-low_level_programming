#include "main.h"
/**
 * print_rev - print in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{

	}
	for (i =i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
