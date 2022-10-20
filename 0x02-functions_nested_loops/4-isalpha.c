#include "main.h"

/**
 * _isalpha - function checks if character is alphabetic
 * @c: character to be checked
 *
 * Return: If true 1, else 0.
 */
int _isalpha(int c)
{
	if (((c >= 'a') || (c >= 'A')) && ((c <= 'z') || (c <= 'Z')))
		return (1);
	else
		return (0);
}
