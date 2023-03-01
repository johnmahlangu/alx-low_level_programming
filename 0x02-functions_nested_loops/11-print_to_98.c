#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: variable
 * Return: n to 98
 */
void print_to_98(int n)
{
	for (n ; n <= 98; n++)
	{
		if (n != 98)
		{
			printf("%d\, ",n)
		}
		else
			printf("98");
	}
}

