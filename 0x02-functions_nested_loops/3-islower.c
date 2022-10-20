#include "main.h"

/**
 * _islower - function that checks if character is lowercase
 * @c: character to be checked
 *
 * Return: On success 1, on error 0.
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
