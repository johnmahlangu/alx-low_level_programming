#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - ..
 * @separator: ..
 * @n: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char*);

		if (separator == NULL)
		{
			printf("%s", s);
		}
		else
		{
			if (i == 0)
			{
				printf("%s", s);
			}
			else
			{
				printf("%s%s", separator, s);
			}
		}
	}
	printf("\n");
	va_end(args);
}
