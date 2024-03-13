#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure dog à initialiser
 * @name: nom à initialiser
 * @age: âge à initialiser
 * @owner: propriétaire à initialiser
 */
void init_dog(struct dog *dog, char *name, float age, char *owner)
{
	if (dog != NULL)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
}
