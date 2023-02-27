#include "main.h"
/**
 * print_rev - print in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\n'; i++)
	{

	}

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
