#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a given integer
 * @n: Integer whose last value is found
 *
 * Return: Integer (last)
 */
int print_last_digit(int n)
{
	int last = (n % 10);

	/* check for negative case */
	if (n < 0)
		last = (last * (-1))
	_putchar(last + '0');
	return (last);
}
