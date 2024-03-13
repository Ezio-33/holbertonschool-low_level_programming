#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche les informations d'un chien
 * @d: Pointeur vers la structure dog à afficher
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Nom: %s\n", (d->name != NULL)
								? d->name
								: "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Propriétaire: %s\n", (d->owner != NULL)
										 ? d->owner
										 : "(nil)");
	}
	else
		return;
}
