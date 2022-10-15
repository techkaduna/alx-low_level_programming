#include <stdio.h>

/**
 * main - prints all base16 numbers in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int nums;
	char letter;

	/*run a loop that iterate over integers and chars*/
	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
