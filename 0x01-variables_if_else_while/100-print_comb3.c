#include <stdio.h>
/**
 * main - header
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int k = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar('i');
		putchar(',');
		putchar(' ');	
		for (k = 0; k <= '9'; k++)
		{
			putchar('k');
		}
	}
	putchar('\n');
	return (0);
}
