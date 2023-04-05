#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * copy - ...
 * @c: ...
 * @s: ...
 * @i: ..
 * Return: ...
 */
char *copy(char *s, char c, unsigned int i)
{
	unsigned int j;

	for (j = 0; j < i; j++)
	{
		s[j] = c;
	}

	return (s);
}
/**
 * _calloc - ...
 * @nmemb: ...
 * @size: ...
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	copy(ptr, 0, nmemb * size);
	return (ptr);
}
