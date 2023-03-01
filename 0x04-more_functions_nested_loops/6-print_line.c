#include "main.h"
/**
 * print_line - print lines
 * @n: number of lines
 * Return: number of lines
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{	
			_putchar('_');
		}
	}
}
