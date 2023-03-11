#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int j;
	int n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	n = i / 2;

	if (n % 2 == 0)
	{
		for (j = i / 2 + 1; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n + 1; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
