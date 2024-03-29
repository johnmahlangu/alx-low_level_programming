#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - ....
 * @n: ...
 * Return: ...
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - ...
 * @n: ...
 * @i: ...
 * Return: ...
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if (i * i > n)
		return (1);

	return (check_prime(n, i + 1));
}
