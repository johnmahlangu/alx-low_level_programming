#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat string
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int a = 0;
	int b = 0;
	char *c;

	if (s1 == NULL)
		return ("");

	while (s1[i] != '\0')
	{
		i++;
	}

	if (s2 == NULL)
	{
		return ("");
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	k = i + j;
	c = malloc((sizeof(char) * k) + 1);
	if (c == NULL)
		return (NULL);
	while (a < i)
	{
		c[a] = s1[a];
		a++;
	}
	while (b < k)
	{
		c[i] = s2[b];
		b++;
		i++;
	}
	c[k] = '\0';
	return (c);
}
