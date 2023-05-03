#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - ...
 * @head: ...
 * Return: deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		num = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (num);
}
