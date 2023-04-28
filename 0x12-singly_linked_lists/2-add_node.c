#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 * Return: address of newnode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	while (str[i])
	{
		i++;
	}

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = i;
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
