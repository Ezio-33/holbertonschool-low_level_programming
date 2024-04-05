#include "main.h"
/**
 * set_bit - Définit la valeur d'un bit à 1 à un index donné.
 * @n: Pointeur vers un nombre non signé de type unsigned long int.
 * @index: Index du bit à définir à 1, commençant à 0.
 *
 * Return: 1 si l'opération a réussi, ou -1 en cas d'erreur.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		/* L'index est hors limites */
		return (-1);
	}

	*n = *n | (1UL << index);
	return (1);
}
