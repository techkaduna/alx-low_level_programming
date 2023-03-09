#include "main.h"

/**
 * factorial - calculates the factorial of n
 * @n: number whose factorial is determined
 *
 * Return: Error (-1), (n!)
 */

int factorial(int n)
{
	int res = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
