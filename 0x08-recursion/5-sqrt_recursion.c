#include "main.h"

/**
 * _sqrt - finds the sqrt of n
 * @n: number
 * @p: number2
 *
 * Return: sqrt of n
 */

int _sqrt(int n, int p)
{
	if (n > p / 2)
		return (-1);
	if (n * n == p)
		return (n);
	return (_sqrt(n - 1, p));
}

/**
 * _sqrt_recursion - finds natural sqrt of n
 * @n: number
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (n);
	if (n == 0)
		return (n);
	return (_sqrt(0, n));
}
