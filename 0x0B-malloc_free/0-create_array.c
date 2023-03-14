#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars
 * @size: size of array
 * @c: char variable
 * Return: chha
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;

	}
	return (s);
}
