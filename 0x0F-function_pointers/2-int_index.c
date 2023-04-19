#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for int
 * @array: ...
 * @size: ...
 * @cmp: ...
 * Return: searched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
