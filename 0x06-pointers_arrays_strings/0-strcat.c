#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: source string to be concatenated to another
 * @dest: string to which another string is concatenated to
 * Return: A pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_l = 0;

	while (dest[index++])
	{
		dest_l++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_l++] = src[index];
	}

	return (dest);
}
