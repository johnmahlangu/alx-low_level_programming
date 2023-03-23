#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - ...
 * @n: ...
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;
	int x = 0;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			sum += x;
		}
		return (sum);
	}
	va_end(args);
}
