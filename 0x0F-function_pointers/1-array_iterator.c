#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate an array
 * @array: ...
 * @size: ...
 * @action: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
