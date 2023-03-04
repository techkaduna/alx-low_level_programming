#include "main.h"

/**
 * leet - function encodes a str into 1337
 * @str: string to be encoded
 *
 * Return: str
 */

char *leet(char *str)
{
	int ind1 = 0;
	int ind2;
	char _leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[ind1])
	{
		for (ind2 = 0; ind2 < 7; ind2++)
		{
			if (str[ind1] == _leet[ind2] ||
				str[ind1] - 32 == _leet[ind2])
			{
				str[ind1] = ind2 + '0';
			}
		}
		ind1++;
	}

	return (str);
}
