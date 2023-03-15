#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copy of string
 *@str: string
 *Return: copied string
 */
char *_strdup(char *str)
{
	int j = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';
	return (0);
}
