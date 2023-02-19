#include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	for (num = '0'; num < '10'; num++)
	{
		putchar(num, ", ");
	}
}
