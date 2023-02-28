#include "main.h"
/**
 * print_rev - print in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\n'; i++)
	{
		len++;
	}

	for (len; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
