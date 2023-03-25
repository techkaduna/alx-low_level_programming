#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all its parameters.
 * @n: number of the arguments.
 *
 * Return: sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list v_list;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(v_list, n);

	for (a = 0; a < n; a++)
		sum += va_arg(v_list, int);

	va_end(v_list);

	return (sum);
}
