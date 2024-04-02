#include "lists.h"

/**
 * dlistint_len - Renvoie le nombre d'éléments
 * dans une liste chaînée dlistint_t.
 * @h: Pointeur vers la tête de la liste.
 *
 * Return: Le nombre de nœuds dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nombre_noeuds = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		nombre_noeuds++;
		temp = temp->next;
	}

	return (nombre_noeuds);
}
