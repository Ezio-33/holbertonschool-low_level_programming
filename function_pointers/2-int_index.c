#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Cherche un entier dans un tableau
 * @tableau: Le tableau d'entiers
 * @taille: Le nombre d'éléments dans le tableau
 * @cmp: Pointeur vers la fonction de comparaison
 *
 * Return: Index du premier élément pour
 * lequel cmp ne retourne pas 0, sinon -1
 */

int int_index(int *tableau, int taille, int (*cmp)(int))
{
	int i;

	if (taille <= 0 || !tableau || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < taille; i++)
	{
		if (cmp(tableau[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
