#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @src - source string to be concatenated to another
 * @dest: string to which another string is concatenated to
 * Return: A pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_l = 0;

	while (dest[index] != '\0')
	{
		dest_l++;
	}
	
	while (src[index] != '\0')
	{
		dest[dest_l] = src[index];
		index++;
		dest_l++;
	}
	dest[dest_l] = '\0';
	return (dest);
}
