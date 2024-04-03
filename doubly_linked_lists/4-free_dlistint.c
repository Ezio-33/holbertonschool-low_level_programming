#include "lists.h"

/**
 * free_dlistint - Libère la mémoire allouée
 * pour une liste chaînée dlistint_t.
 * @head: Pointeur vers la tête de la liste.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *noeud_courant;
	dlistint_t *noeud_suivant;

	noeud_courant = head;
	while (noeud_courant != NULL)
	{
		noeud_suivant = noeud_courant->next;
		free(noeud_courant);
		noeud_courant = noeud_suivant;
	}
}
