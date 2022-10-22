#include "main.h"

/**
 * print_line - function draws straight line in the terminal taking n times
 * @n: number of times character "_" is printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < (n + 1); i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
