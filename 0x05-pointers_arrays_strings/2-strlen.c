#include "main.h"

/**
 * _strlen - takes a pointer to string and returns the lenght of the string
 * @s: pointer to string (param)
 * Return: len (Lenght of string)
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
