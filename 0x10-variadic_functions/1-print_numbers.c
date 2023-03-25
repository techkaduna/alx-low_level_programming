#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v_list;
	unsigned int a;

	va_start(v_list, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(v_list, int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(v_list);
}
