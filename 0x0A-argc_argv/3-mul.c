#include <stdio.h>
#include <stdlib.h>
/**
 * main - main funtion
 * @argc: int
 * @argv: chara
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;
	int ret;

	if (argc == 0 || argc == 1)
	{
		printf("Error\n");
		ret = 1;
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (i > 0)
			{
				mul *= atoi(argv[i]);
			}
		}
		printf("%d\n", mul);
		ret = 0;
	}

	return (ret);
}
