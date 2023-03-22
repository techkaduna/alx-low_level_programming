#include <stdlib.h>
#include "main.h"

/**
 * free_dog - function that frees dog
 * @d: dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
