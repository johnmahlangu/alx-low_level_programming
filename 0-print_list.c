#include "lists.h"
#include <stdio.h>
/**
 * print_list - ...
 * @h: ...
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
