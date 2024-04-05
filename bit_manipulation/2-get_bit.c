#include "main.h"
/**
 * get_bit - Retourne la valeur d'un bit à un index donné.
 * @n: Nombre non signé de type unsigned long int.
 * @index: Index du bit à récupérer, commençant à 0.
 *
 * Return: La valeur du bit à l'index spécifié, ou -1 en cas d'erreur.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* Vérifie si le bit est = a 1 ou 0 */
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
