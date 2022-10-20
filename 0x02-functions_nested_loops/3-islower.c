#include "main.h"

/**
 * _islower - function that checks if character is lowercase
 * @c: character to be checked
 *
 * Return: On success 1, on error 0.
 */
int _islower(int c)
{
	char check = 'a';

	/*while loop runs now */
	while (check <= 'z')
	{
		if (c == check)
			return (1);
		else
			return (0);
	}
}
