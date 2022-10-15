#include <stdio.h>

/**
 * main - Program prints lowercase then uppercases chars
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char alPha = 'A';

	/*loop through an array of alphabets*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alPha = 'A'; alPha <= 'Z'; alPha++)
		putchar(alPha);
	putchar('\n');
	return (0);
}
