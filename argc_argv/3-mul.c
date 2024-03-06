#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres
 * @argc: Le nombre d'arguments en ligne de commande
 * @argv: Un tableau contenant les arguments de la ligne de commande
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int resultat, nombre1, nombre2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nombre1 = atoi(argv[1]);
	nombre2 = atoi(argv[2]);

	resultat = nombre1 * nombre2;

	printf("%d\n", resultat);

	return (0);
}

