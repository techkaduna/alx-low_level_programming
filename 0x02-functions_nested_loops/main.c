#include <unistd.h>
#include "main.h"
/** 
 * _putchar - writes the character c to standard output
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - prints all the alphabets in lowercase to the standard output
 * @c: The alphabets to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char c;

	/* For loop to print characters while the exist */
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
