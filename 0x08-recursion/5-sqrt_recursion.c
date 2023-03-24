#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - ...
 * @n: ...
 * Return: ..
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - ...
 * @n: ...
 * @i: ...
 * Return: ...
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}