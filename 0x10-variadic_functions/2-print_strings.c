#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *pullstr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		pullstr = va_arg(args, char *);

		if (i == 0 && pullstr != NULL)
		{
			printf("%s", pullstr);
		}
		else if (i == 0 && pullstr == NULL)
		{
			printf("(nil)");
		}
		if (i > 0)
		{
			if (separator == NULL && pullstr != NULL)
			{
				printf("%s", pullstr);
			}
			else if (separator != NULL && pullstr == NULL)
			{
				printf("%s(nil))", separator);
			}
			else if (separator == NULL && pullstr == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s%s", separator, pullstr);
			}
		}
	}
	va_end(args);
	printf("\n");
}
