#include "3-calc.h"
/**
 * op_add - calcule la somme de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - fait la soustraction de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: différence entre a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Fait la multiplication de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: résultat de a multiplié par b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calcule la division de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: résultat de la division de a et b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calcule le reste de la division de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: reste de la division de a et b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
