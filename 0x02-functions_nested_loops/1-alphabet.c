#include "main.h"

/**
 * print_alphabet - function prints lowercase alphabets
 * using a for loop
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char alpha;

	/* for loop t iterate over alphabets */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
