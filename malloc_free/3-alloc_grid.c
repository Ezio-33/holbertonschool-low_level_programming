#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau a deux
 * dimensions d'entiers initialis√ a 0
 * @largeur: Largeur du tableau
 * @hauteur: Hauteur du tableau
 *
 * Return: Un pointeur vers le tableau a deux dimensions
 * ou NULL en cas d'√©chec)
 */
int **alloc_grid(int largeur, int hauteur)
{
	int **grille;
	int i, j;

	if (largeur <= 0 || hauteur <= 0)
		return (NULL);

	grille = malloc(sizeof(int *) * hauteur);

	if (grille == NULL)
		return (NULL);


	for (i = 0; i < hauteur; i++)
	{
		grille[i] = malloc(sizeof(int) * largeur);
		if (grille[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grille[j]);
			free(grille);
			return (NULL);
		}

		for (j = 0; j < largeur; j++)
			grille[i][j] = 0;
	}
	return (grille);
}

