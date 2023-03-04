#include "main.h"

/**
 * cap_string - function that capitalizeall the words of a string
 * @str: string to be capitalized
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (str[ind] >= 'a' && str[ind] <= 'z')
		{
			ind++;
		}

		if (str[ind - 1] == ' ' ||
				str[ind - 1] == '\t' ||
				str[ind - 1] == '\n' ||
				str[ind - 1] == ',' ||
				str[ind - 1] == ';' ||
				str[ind - 1] == '!' ||
				str[ind - 1] == '?' ||
				str[ind - 1] == '"' ||
				str[ind - 1] == '(' ||
				str[ind - 1] == ')' ||
				str[ind - 1] == '{' ||
				str[ind - 1] == '}' ||
				str[ind - 1] == '.' ||
				str[ind - 1] == 0)
		{
			str[ind] -= 32;
		}

		ind++;
	}

	return (str);
