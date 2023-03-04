#include "main.h"

/**
 * _strncpy - function that copies at most n number of
 * bytes from rc string to dest string
 * @src: Source string to copy from
 * @dest: destination string to copy into
 * @n: max number of bytes copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_l = 0;

	while (src[index] != '\0')
	{
		src_l++;
		index++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_l; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
