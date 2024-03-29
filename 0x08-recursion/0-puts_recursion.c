#include "main.h"

/**
 * _puts_recursion - function recursively prints string
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
