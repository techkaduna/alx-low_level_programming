#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 - 14 followed by new line
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
