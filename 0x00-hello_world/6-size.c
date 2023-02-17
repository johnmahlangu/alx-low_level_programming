#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char byte[] = "byte(s)";

	printf("Size of a char: ", sizeof(char), " ", byte);
	printf("Size of a int: ", sizeof(int), " ", byte);
	printf("Size of a long int: ", sizeof(long int), " ", byte);
	printf("Size of a long long int: ", sizeof(long long int), " ", byte);
	printf("Size of a float: ", sizeof(float), " ", byte);
	return (0);
}
