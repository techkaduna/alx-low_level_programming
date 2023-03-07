#include "main.h"

/**
 * _strspn - get number of bytes in initial segmment
 * of @s
 * @s: initial segment
 * @accept: bytes accepted
 *
 * Return: number of of bytes accepted
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, m, bool;

	for (l = 0; *(s + l) != '\0'; l++)
	{
		bool = 1;

		for (m = 0; *(accept + m); m++)
		{
			if (*(s + l) == *(accept + m))
			{
				bool = 0;
				break;
			}
		}

		if (bool == 1)
		{
			break;
		}
	}

	return (i);
}
