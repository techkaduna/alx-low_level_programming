#include "main.h"

/**
 * print_sign - function print the sign of an integer
 * @n: number whose sign is determined
 *
 * Return: If positiv1, if negative -1, if zero 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
