#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: string variable for name
 * @f: pointer to function
 *
 * Return: nothing (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
