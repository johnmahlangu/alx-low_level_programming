#include "lists.h"
#include <stdio.h>

/**
 * list_len - ...
 * @h: ...
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
