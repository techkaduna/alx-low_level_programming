#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function prints all natural from n to 98
 * @n: starting point for printing
 *
 * Return: void
 */
void print_to_98(int n)
{
	/*check if n > 98 */
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
