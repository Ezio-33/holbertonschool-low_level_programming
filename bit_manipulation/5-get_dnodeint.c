#include "lists.h"

/**
 * get_dnodeint_at_index - Renvoie le nœud situé
 * à l'index spécifié dans une liste chaînée dlistint_t.
 * @head: Pointeur vers la tête de la liste.
 * @index: Index du nœud à récupérer (en commençant à 0).
 *
 * Return: Pointeur vers le nœud à l'index
 * spécifié, ou NULL si le nœud n'existe pas.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *noeud_courant;
	unsigned int i;

	noeud_courant = head;
	for (i = 0; i < index && noeud_courant != NULL; i++)
		noeud_courant = noeud_courant->next;

	return (noeud_courant);
}
