#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end
 * @head: head node
 * @n: ...
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}

	return (newnode);
}
