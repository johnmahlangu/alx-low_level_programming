#include <stdio.h>
#include <ctype.h>
/**
 * main - header
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch, ch <= 'z', ch++)
	{
		putchar(ch);
	}
	for (ch, ch <= 'z', ch++)
	{
		putchar(toupper(ch));
	}
	return (0);
}
