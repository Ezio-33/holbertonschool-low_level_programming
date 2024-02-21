#include "main.h"

/**
 * _abs - Calcule la valeur absolue d'un entier
 * @nombre: L'entier dont on veut calculer la valeur absolue
 * Return: La valeur absolue de l'entier nombre
 */
int _abs(int nombre)
{
	if (nombre < 0)
	{
		return (-nombre);
	}
	else
	{
		return (nombre);
	}
}
