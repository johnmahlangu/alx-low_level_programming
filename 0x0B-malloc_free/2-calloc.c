#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - ...
 * @nmemb: ...
 * @size: ...
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int n;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	s = malloc(n);

	if (s == NULL)
		return (NULL);

	while (i < n)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
