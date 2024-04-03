#include "lists.h"

/**
 * sum_dlistint - Calcule la somme de toutes les
 * valeurs n des nœuds d'une liste chaînée dlistint_t.
 * @head: Pointeur vers la tête de la liste.
 *
 * Return: La somme de toutes les valeurs n, ou 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;
	dlistint_t *noeud_courant;

	noeud_courant = head;
	while (noeud_courant != NULL)
	{
		somme += noeud_courant->n;
		noeud_courant = noeud_courant->next;
	}

	return (somme);
}
