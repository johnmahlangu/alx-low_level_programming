#include <stdio.h>
#include <ctype.h>
/**
 * main - header
 *
 * Return: Always 0
 */
int main(void)
{
	char upper  = 'A';

	while (upper <= 'Z')
	{
		putchar(tolower(upper), "\n");
		upper++;
	}
	return (0);
}
