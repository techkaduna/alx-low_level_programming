#include "main.h"

/**
 * puts2 - prints every other character of a string starting from th 1st char
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	while (str[i++])
		j++;
	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
