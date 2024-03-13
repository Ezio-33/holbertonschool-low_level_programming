#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche les informations d'un chien
 * @chien: Pointeur vers la structure dog à afficher
 */
void print_dog(struct dog *chien)
{
	if (chien != NULL)
	{
		printf("Nom: %s\n", (chien->name != NULL)
								? chien->name
								: "(nil)");
		printf("Age: %.1f\n", chien->age);
		printf("Propriétaire: %s\n", (chien->owner != NULL)
										 ? chien->owner
										 : "(nil)");
	}
	else
		return;
}
