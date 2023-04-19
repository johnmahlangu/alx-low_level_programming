#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: to be printed
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
