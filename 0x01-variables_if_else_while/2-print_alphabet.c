#include <stdio.h>
/**
 * main - header
 *
 * Return: Always 0
 */
int main(void)
{
	char upper  = 'A';

	while (upper < 'Z')
	{
		putchar(tolower(upper));
		upper++;
	}
	return (0);
}
