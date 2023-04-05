#include "main.h"
#include <stdlib.h>
/**
 * _calloc - kalogs
 * @nmemb: num ele
 * @size: byte size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	s = malloc(nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);


