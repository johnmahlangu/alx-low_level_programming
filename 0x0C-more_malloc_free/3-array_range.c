#include "main.h"
#include <stdlib.h>
/**
 * array_range - ...
 * @min: ...
 * @max: ...
 * Return: ...
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
