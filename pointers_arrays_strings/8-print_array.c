#include "main.h"
#include <stdio.h>

/**
* print_array - Affiche les éléments d'un tableau
*d'entiers, séparés par une virgule et un espace.
* @tableau: pointeur vers le tableau d'entiers
* @n: nombre d'éléments à afficher
*/
void print_array(int *tableau, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", tableau[i]);
	}
	printf("\n");
}
