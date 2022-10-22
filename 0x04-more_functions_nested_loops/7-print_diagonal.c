#include "main.h"

/**
 * print_diagonal - print slashes to form diagonals in the terminal
 * @n: number of times to print '\'
 * Return: void
 */
void print_diagonal(int n)
{
	int l,k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (k = 0; k < l; k++=)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
