#include "main.h"
#include <stdio.h>

/**
 * print_array - Function prints n numbers of items in an array
 * @a: pointer to array of integers
 * @n: number of items to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0, i < n, i++)
	{
		if (i == (n - 1))
			printf("%d", a[(n - 1)]);
		printf("%d, ", a[i]);
	}
	printf('\n');
}
