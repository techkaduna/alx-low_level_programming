#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: struct dog, if fail return (null).
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int i, dname, downer;

	_dog = malloc(sizeof(*_dog));
	if (_dog == NULL || !(name) || !(owner))
	{
		free(_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	_dog->name = malloc(dname + 1);
	_dog->owner = malloc(downer + 1);

	if (!(_dog->name) || !(_dog->owner))
	{
		free(_dog->owner);
		free(_dog->name);
		free(_dog);
		return (NULL);
	}

	for (i = 0; i < dname; i++)
		_dog->name[i] = name[i];
	_dog->name[i] = '\0';

	_dog->age = age;

	for (i = 0; i < downer; i++)
		_dog->owner[i] = owner[i];
	_dog->owner[i] = '\0';

	return (_dog);
}

