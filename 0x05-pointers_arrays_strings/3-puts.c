#include "main.h"

/**
 * _puts - function prints string to stdout takes pointer as argument
 * @str: pointer to string to be printed to stdout
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
