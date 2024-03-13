#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: Pointeur vers le chien à libérer
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
