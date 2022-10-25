#include "main.h"

/**
 * puts2 - prints every other character of a string starting from th 1st char
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
		if (j % 2 == 0)
			_putchar(str[j]);
	_putchar('\n');
}
