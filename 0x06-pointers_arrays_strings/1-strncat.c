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
	
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
