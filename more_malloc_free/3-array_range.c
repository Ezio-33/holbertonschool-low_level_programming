#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers de min a max
 * @min: Valeur minimale
 * @max: Valeur maximale
 *
 * Return: Pointeur vers le tableau d'entiers créé
 */
int *array_range(int min, int max)
{
	int *tab;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tab = malloc(sizeof(int) * size);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = min++;

	return (tab);
}

