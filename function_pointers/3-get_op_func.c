#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction correcte pour effectuer l'opération.
 * @s: L'opérateur transmis en tant qu'argument.
 *
 * Return: Pointeur vers la fonction correspondant à l'opérateur.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && !*(s + 1))
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
