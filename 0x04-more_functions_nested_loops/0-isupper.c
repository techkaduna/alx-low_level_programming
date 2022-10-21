#include "main.h"

/**
 * _isupper - function checks if character is uppercase
 * @c: character to be checked 
 *
 * Return: If uppercase,1 else 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
