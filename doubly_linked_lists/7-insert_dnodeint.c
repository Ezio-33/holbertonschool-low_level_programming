#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à
 * un index donné dans une liste chaînée dlistint_t.
 * @h: Double pointeur vers la tête de la liste.
 * @idx: Index où le nouveau nœud doit être inséré (en commençant à 0).
 * @n: Valeur à stocker dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas
 * d'échec ou si l'index est invalide.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau_noeud;
	dlistint_t *noeud_courant;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->n = n;

	if (idx == 0)
	{
		nouveau_noeud->prev = NULL;
		nouveau_noeud->next = *h;
		if (*h != NULL)
			(*h)->prev = nouveau_noeud;
		*h = nouveau_noeud;
		return (nouveau_noeud);
	}

	noeud_courant = *h;
	for (i = 0; i < idx - 1 && noeud_courant != NULL; i++)
		noeud_courant = noeud_courant->next;

	if (noeud_courant == NULL || noeud_courant->next == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}

	nouveau_noeud->prev = noeud_courant;
	nouveau_noeud->next = noeud_courant->next;
	noeud_courant->next->prev = nouveau_noeud;
	noeud_courant->next = nouveau_noeud;

	return (nouveau_noeud);
}
