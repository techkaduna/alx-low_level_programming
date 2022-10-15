#include <stdio.h>

/**
 * main - print all letters except q and e
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha;

	/* looping through the array of alphabets*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
