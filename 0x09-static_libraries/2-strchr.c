#include "main.h"
/**
 * _strchr - substring
 * @s: stri
 * @c: find
 * Return: first
 */
char *_strchr(char *s, char c)
{
	int i = 0;
       	int j = 0;
	int k = 0;

	char *x = "";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	for (j = i; s[j] != '\0'; j++)
	{
		x[k] = s[j];
		k++;
	}
	x[k] = '\0';
	return (x);
}
