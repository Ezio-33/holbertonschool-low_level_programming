#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère la mémoire allouée pour une grille à deux dimensions
 * @grille: Pointeur vers la grille à libérer
 * @hauteur: Hauteur de la grille
 */
void free_grid(int **grille, int hauteur)
{
	int i;

	if (grille == NULL)
		return;

	for (i = 0; i < hauteur; i++)
	{
		free(grille[i]);
	}

	free(grille);
}

