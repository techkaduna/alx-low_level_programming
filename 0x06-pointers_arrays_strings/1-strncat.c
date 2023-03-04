#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * provided it uses at least n bytes from @src
 * @src: source string to be copied
 * @dest: destintion string to copy into
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_l = 0;

	while (dest[index++])
	{
		dest_l++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_l++] = src[index];
	}

	return (dest);
}
