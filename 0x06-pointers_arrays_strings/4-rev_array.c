#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: first int
 * @n: num  arrray
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
