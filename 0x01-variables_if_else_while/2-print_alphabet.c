#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha_num;

	/*loop through and print char*/
	for (alpha_num = 'a'; alpha_num <= 'z'; alpha_num++)
		putchar(alpha_num);
	putchar('\n');
	return (0);
}
