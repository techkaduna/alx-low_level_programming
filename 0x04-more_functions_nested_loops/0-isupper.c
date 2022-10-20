#include "main.h"

/**
 * _isupper - function checks if alphabet is uppercase
 * @c: character to be checked
 *
 * Return: if uppercase, 1 (success)
 * if not uppercase, 0
 */

int _isupper(int c)
{
	/* check if c is uppercase */
	if ((c >= 'A') || (c <= 'Z'))
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
