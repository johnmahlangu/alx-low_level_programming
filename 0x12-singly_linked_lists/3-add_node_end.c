#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node end
 * @head: ...
 * @str: ...
 * Return: newnode at end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;
	int i = 0;

	while (str[i])
	{
		i++;
	}

	newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->len = i;
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
