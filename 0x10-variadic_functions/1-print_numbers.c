#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - ...
 * @separator: ...
 * @n: ...
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (i == 0)
		{
			printf("%d", x);
		}
		else
		{
			if (separator != NULL)
			{
				printf("%s%d", separator, x);
			}
			else
			{
				printf("%d", x);
			}
		}
	}
	printf("\n");
	va_end(args);
}
