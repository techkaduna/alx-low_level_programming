#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to first string to be compared
 * @s2: pointer to second string to be compared against
 *
 * Return: If str1 == str2, 0
 *	If str1 != str2, return (str1 - str2)
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
