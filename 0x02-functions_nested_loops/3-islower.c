#include "main.h"
/**
 * _islower - check for lower character
 *
 * Return: 0
 * @c: lower case character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
