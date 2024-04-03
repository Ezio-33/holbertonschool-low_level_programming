#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à l'index
 * spécifié dans une liste chaînée dlistint_t.
 * @head: Double pointeur vers la tête de la liste.
 * @index: Index du nœud à supprimer (en commençant à 0).
 *
 * Return: 1 si la suppression a réussi, -1 en cas d'échec.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *noeud_courant;
	dlistint_t *noeud_a_supprimer;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	noeud_courant = *head;
	if (index == 0)
	{
		*head = noeud_courant->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(noeud_courant);
		return (1);
	}

	for (i = 0; i < index - 1 && noeud_courant != NULL; i++)
		noeud_courant = noeud_courant->next;

	if (noeud_courant == NULL || noeud_courant->next == NULL)
		return (-1);

	noeud_a_supprimer = noeud_courant->next;
	noeud_courant->next = noeud_a_supprimer->next;
	if (noeud_a_supprimer->next != NULL)
		noeud_a_supprimer->next->prev = noeud_courant;
	free(noeud_a_supprimer);

	return (1);
}
