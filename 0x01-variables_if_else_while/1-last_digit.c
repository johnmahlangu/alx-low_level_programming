#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
/**
 * main - head
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int n_2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_2 = n % 10;
 	if ((n_2) > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n_2);
	}
	else if (n_2 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n_2);
	}
	else if (n_2 < 6 && n_2 != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_2);
	}
	return (0);
}
