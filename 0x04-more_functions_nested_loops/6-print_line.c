#include "main.h"

/**
 * print_line - function draws straight line in the terminal taking n times
 * @n: number of times character "_" is printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n){
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
