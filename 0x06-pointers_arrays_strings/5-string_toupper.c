#include "main.h"

/**
 * string_toupper - convert lowercase letters to uppercase
 * @str: string to be converted
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}

		index++;
	}

	return (str)
}
