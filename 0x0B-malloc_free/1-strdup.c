#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string given as param
 * @str: string to duplicate
 *
 * Return: pointer to memory, if error (NULL)
 */

char *_strdup(char *str)
{
	int i = 0, size = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	s = malloc(sizeof(*s) * size);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
