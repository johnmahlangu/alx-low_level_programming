#include "main.h"
/**
 * rev_string - reverses a string
 * @s: variable
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
	s[i] = '\0';
}
