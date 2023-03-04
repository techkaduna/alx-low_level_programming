#include "main.h"

/**
 * reverse_array - function that reverses the order of ontents of an array
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = (n - 1); index >= (n / 2); index--)
	{
		temp = a[(n - 1) - index];
		a[(n - 1) - index] = a[index];
		a[index] = temp;
	}
}
