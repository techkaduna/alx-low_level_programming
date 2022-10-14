#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	/* print the  size of each data type */
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long) sizeof(li));
	printf("Size of a long long float: %lu byte(s)\n", (unsigned long) sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}