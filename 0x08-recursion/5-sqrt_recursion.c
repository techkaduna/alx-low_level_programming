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
	if (p * p == n)
		return (p);
	if (p == n / 2)
		return (-1);
	return (_sqrt(n, p + 1));
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
	return (_sqrt(n, 0));
}
