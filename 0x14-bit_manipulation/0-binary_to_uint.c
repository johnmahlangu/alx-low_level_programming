#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: ...
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec = 2 * dec + (b[i] - '0');
		i++;
	}
	return (dec);
}
