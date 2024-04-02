#include "lists.h"

/**
 * list_len - Renvoie le nombre d'éléments dans une liste_t
 * @h: Pointeur vers le début de la liste
 *
 * Return: Nombre de nœuds dans la liste
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
