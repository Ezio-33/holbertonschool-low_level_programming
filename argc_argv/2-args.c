#include "main.h"
#include <stdio.h>

/**
 * main - Affiche tous les arguments qu'il reçoit
 * @argc: Le nombre d'arguments en ligne
 * de commande
 * @argv: Un tableau contenant les
 * arguments de la ligne de commande
 *
 * Return: 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

