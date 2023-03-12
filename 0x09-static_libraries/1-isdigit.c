#include "main.h"

/**
 * _isdigit - function checks if character is a digit (from 0 to 9)
 * @c: character to be checke
 * Return: if digit 1, else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
