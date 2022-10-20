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
	int i;

	/*for loop to iterate */
	for (i = n; i <= 98; i++)
		if (i == 98)
			printf("%d", 98);
		else
			printf("%d, ", i);
}
