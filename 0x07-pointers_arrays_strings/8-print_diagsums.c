#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function prints the sum of the two diagonals
 * of a square matrix of integers.
 *@a: pointer
 *@size: matrix size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			n1 += *(a + i);
		}

		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			n2 += *(a + i);
		}
	}
	printf("%d, %d\n", n1, n2);
}
