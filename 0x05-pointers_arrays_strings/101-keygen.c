#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int random_num = 0;

	srand(time(NULL));
	random_num = rand() % 1000;
	printf("%d", random_num);
	return (0);
}
