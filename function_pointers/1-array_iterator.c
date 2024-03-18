#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Applique une fonction sur chaque élément d'un tableau
 * @tableau: Le tableau d'entiers
 * @taille: La taille du tableau
 * @action: Pointeur vers la fonction à appliquer sur chaque élément
 */
void array_iterator(int *tableau, size_t taille, void (*action)(int))
{
	unsigned int i;

	if (tableau && action)
	{
		for (i = 0; i < taille; i++)
		{
			action(tableau[i]);
		}
	}
}