#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print elements of listint_t
 * @h: ...
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
