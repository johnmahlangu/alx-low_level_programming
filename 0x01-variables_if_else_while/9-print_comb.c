#include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar(',');
	return (0);
}
