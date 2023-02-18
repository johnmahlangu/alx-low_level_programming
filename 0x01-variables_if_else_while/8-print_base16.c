#include <stdio.h>
/**
 * main - header
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char num_ch = '0';

	for (num_ch = '0'; num_ch <= '9'; num_ch++)
	{
		putchar(num_ch);
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
