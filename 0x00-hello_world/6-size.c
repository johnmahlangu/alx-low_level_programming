#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %i byte(0)", sizeof(char));
	printf("Size of a int: %i", sizeof(int));
	printf("Size of a long int: %i", sizeof(long int));
	printf("Size of a long long int: %i", sizeof(long long int));
	printf("Size of a float: %i", sizeof(float));
	return (0);
}
