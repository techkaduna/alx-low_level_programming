#include <stdio.h>

/**
 * main - print all single digits between 0 and 9
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;

	/*looping through array of numbers */
	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');
}
