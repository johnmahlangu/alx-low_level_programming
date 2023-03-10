#include "main.h"
/**
 * _memset - memset
 * @s: var1
 * @b: var2
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
