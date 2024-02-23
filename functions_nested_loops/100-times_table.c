#include <stdio.h>
#include "main.h"
/**
* print_times_table - imprime la table de n fois, en commençant par 0
* @nombre1: nombre de la table de multiplication
*/


void print_times_table(int nombre1)
{
	int nombre2, nombre3, produit;

	if (nombre1 < 0 || nombre1 > 15)
	{
		return;
	}

	for (nombre2 = 0; nombre2 <= nombre1; nombre2++)
	{
		for (nombre3 = 0; nombre3 <= nombre1; nombre3++)
		{
			produit = nombre3 * nombre2;
			if (nombre3 == 0)
			{
				printf("%d", produit);
			}
			else if (produit < 10 && nombre3 != 0)
			{
				printf(",   %d", produit);
			}
			else if (produit >= 10 && produit < 100)
			{
				printf(",  %d", produit);
			}
			else if (produit >= 100)
			{
				printf(", %d", produit);
			}
		}
		printf("\n");
	}
}
