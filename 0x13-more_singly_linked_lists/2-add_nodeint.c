#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add node at brginning
 * @head: head node
 * @n: number
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

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
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
