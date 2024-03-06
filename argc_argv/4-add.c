#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Additionne des nombres positifs
 * @argc: Le nombre d'arguments en ligne de commande
 * @argv: Un tableau contenant les arguments de la ligne de commande
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int somme = 0;
	int i, nombre;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (nombre = 0; argv[i][nombre] != '\0'; nombre++)
		{
			if (argv[i][nombre] < '0' || argv[i][nombre] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		somme += atoi(argv[i]);
	}

	printf("%d\n", somme);

	return (0);
}

