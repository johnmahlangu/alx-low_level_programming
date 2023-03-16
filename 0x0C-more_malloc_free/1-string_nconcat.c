#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate
 * @s1: string 1
 * @s2: string 2
 * @n: length
 * Return: concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	unsigned int k = 0;
	char *c;

	if (s1 == NULL)
		return (" ");
	while (s1[i] != '\0')
	{
		i++;
	}
	c = malloc(sizeof(char) * (n + i + 1));
	while (j < i)
	{
		c[j] = s1[j];
		j++;
	}
	if (s2 == NULL)
		return (" ");
	while (k < n)
	{
		c[i] = s2[k];
		i++;
		k++;
	}
	c[i] = '\0';
	return (c);
}
