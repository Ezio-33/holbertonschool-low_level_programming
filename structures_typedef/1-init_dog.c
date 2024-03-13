#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure dog à initialiser
 * @name: nom à initialiser
 * @age: âge à initialiser
 * @owner: propriétaire à initialiser
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
