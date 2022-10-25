#include "main.h"

/**
 * print_rev - prints reverse of string, takes pointer to char
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i++])
		j++;

	for (i = (j - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
