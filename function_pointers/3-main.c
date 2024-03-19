#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - programme qui effectue des opérations simples
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 *
 * Return: 0 en cas de succès, sort avec un statut
 * 98, 99 ou 100 en cas d'échec
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
