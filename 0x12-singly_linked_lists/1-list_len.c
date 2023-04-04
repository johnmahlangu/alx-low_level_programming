#include "lists.h"
#include  <stdio.h>
/**
 * list_len - ...
 *@h: ...
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
