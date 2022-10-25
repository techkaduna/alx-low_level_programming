#include "main.h"

/**
 * _puts - prints string to stdout
 * @s: pointer to string 
 *
 * Return: void
 */
void _puts(char *str)
{
	while(*str)
		_putchar(*str++);
	_putchar('\n');
}
