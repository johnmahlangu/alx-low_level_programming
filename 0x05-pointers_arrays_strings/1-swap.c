#include "main.h"
/**
 * swap_int - swap integers
 * @a: first int
 * @b: sec int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
