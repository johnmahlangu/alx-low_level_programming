#include "lists.h"
#include <stdio.h>

/**
 * listint_len - count number of nodes
 * @h: ...
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
