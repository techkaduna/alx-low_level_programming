#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha;

	/* looping in reverse manner from z to a*/
	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
