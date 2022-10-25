#include "main.h"

/**
 * swap_int - takes two pointers to integers and swaps their value
 * @a: first pointer to int
 * @b: second pointer to int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
