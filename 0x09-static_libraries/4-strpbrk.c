#include "main.h"
/**
 * _strpbrk - searches
 * @s: search
 * @accept: string
 * Return: accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int num = 0;
	int z = 0;
	char *x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		if (accept[j] == '\0')
		{
			break;
		}
		else
		{
			num++;
		}
		}
	}
	for (k = num; s[k] != '\0'; k++)
	{
		x[z] == s[k];
		z++;
	}
	return (x);
}

