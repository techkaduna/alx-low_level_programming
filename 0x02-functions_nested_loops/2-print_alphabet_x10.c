#include "main.h"

/**
 * print_alphabet_x10 - Function prints 10 times lowercase alphabet
 * @alpha - character to be printed
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	/* while loop to iterate how many times for loop runs */
	while (1 <= 10)
	{
		for (alpha = 'a'; alpha < 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
