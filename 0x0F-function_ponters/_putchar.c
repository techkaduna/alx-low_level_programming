#include <unistd.h>

/**
 * _putchar - function prints char to stdout
 * @c: char to print
 *
 * Return: Always (0) success
 */

int _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
