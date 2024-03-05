#include "main.h"

/**
 * _pow_recursion - renvoie la valeur de
 * x élevée à la puissance de y
 * @x: Valeur a élevée à la puissance de y
 * @y: Puissance
 * Return: le résultat de la puissance
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

