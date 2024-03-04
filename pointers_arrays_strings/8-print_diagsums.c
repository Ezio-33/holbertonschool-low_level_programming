#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule et affiche les sommes
 * des diagonales d'une matrice carrée
 * @matrice: Pointeur vers la matrice carrée
 * @taille: Taille de la matrice
 */
void print_diagsums(int *matrice, int taille)
{
	int somme_diag1 = 0, somme_diag2 = 0;
	int i;

	for (i = 0; i < taille; i++)
	{
		somme_diag1 += *(matrice + i * taille + i);
		somme_diag2 += *(matrice + i * taille + (taille - 1 - i));
	}

	printf("%d, %d\n", somme_diag1, somme_diag2);
}

