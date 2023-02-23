#include "main.h"
/**
 * _isupper - prints whether a character is upper case or not
 * @c: variable
 * Return: 1 if uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
