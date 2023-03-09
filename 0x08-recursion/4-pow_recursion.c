#include "main.h"

/**
 * _pow_recursion - finds x raised by y
 * @x: number
 * @y: index
 *
 * Return: if error (-1), int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
