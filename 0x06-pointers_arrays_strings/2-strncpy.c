#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: int
 * Return: copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	
	j = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
