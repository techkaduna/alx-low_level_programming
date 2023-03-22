#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: The dog's attribute
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG>H */
