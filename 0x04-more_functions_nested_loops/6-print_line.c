#include "main.h"
/**
 * print_line - print lines
 * @n: number of lines
 * Return: number of lines
 */
void print_line(int n)
{
	int j = n;

	if (j <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i <= j; i++)
		{	
			_putchar('_');
		}
	}
}
