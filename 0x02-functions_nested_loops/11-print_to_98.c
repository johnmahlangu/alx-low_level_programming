#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: variable
 * Return: n to 98
 */
void print_to_98(int n)
{
	int i;
	last = 98;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ",i);
		}
		else
			printf(last);
		printf("\n");
	}
}

