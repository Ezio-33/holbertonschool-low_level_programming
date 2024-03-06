#include <stdio.h>

/**
 * main - affiche le nombre d'arguments
 * passés au programme.
 * @argc: Le nombre d'arguments en ligne de commande
 * @argv: Un tableau contenant les
 * arguments de la ligne de commande
 *
 * Return: 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int nb_arguments;

	(void)argv;

	nb_arguments = argc - 1;

	printf("%d\n", nb_arguments);

	return (0);
}

