#include "main.h"

/**
 * print_most_numbers - prints all numbers excluding 2 and 4 between 0 and 9
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
			continue;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
