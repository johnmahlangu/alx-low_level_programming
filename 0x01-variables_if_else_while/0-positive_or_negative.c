#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(n, " is negative")
	}
	else if (n > 0 && n < 0)
	{
		printf(n, " is zero")
	}
	else
	{
		printf(n, " is positive")
	}
	return (0);
}
