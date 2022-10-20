#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
