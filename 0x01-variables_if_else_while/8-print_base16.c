#include <stdio.h>

/**
 * main - prints all the hexadecimals in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;
	char b;

	/*looping through ab array of intgers and chars */
	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');	
	/*second loop to iterate over hexadecimal letters */
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
}
