#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int n, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (n = 0; n < strlen(c); n++)
			{
				if (c[n] < 48 || c[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
