#include "main.h"

/**
 * islower -  Function checks if character is lowercase
 * @c - character to check
 *
 * Return: On success,1
 * 0, on failure
 */
int islower(int c)
{
	int check = 'a';

	/* while loop */
	while (check <= 'z')
	{
		if (c == check)
			return (1);
		else
			return (0);
	}
}
