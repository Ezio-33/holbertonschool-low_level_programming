#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - affiche tous les nombres naturels de nombre à 98,
 * suivi d'un saut de ligne
 * @nombre: affiche à partir de ce nombre
 */
void print_to_98(int nombre)
{
	int i, compteurDecroissant;

	if (nombre <= 98)
	{
		for (i = nombre; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (nombre >= 98)
	{
		for (compteurDecroissant = nombre; compteurDecroissant >= 98;
		compteurDecroissant--)
		{
			if (compteurDecroissant != 98)
				printf("%d, ", compteurDecroissant);
			else if (compteurDecroissant == 98)
				printf("%d\n", compteurDecroissant);
		}
	}
}
