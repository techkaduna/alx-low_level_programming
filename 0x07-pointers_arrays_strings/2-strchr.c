#include "main.h"

/**
 * _strchr - finds first occurence of char in string
 * @s: string
 * @c: character
 *
 * Return: pointer to first char occurence in @s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
