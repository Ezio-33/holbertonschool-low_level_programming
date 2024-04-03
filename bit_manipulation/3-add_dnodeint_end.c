#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à
 * la fin d'une liste chaînée dlistint_t.
 * @head: Double pointeur vers la tête de la liste.
 * @n: Valeur à stocker dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_noeud;
	dlistint_t *dernier_noeud;

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->n = n;
	nouveau_noeud->next = NULL;

	if (*head == NULL)
	{
		nouveau_noeud->prev = NULL;
		*head = nouveau_noeud;
		return (nouveau_noeud);
	}

	dernier_noeud = *head;
	while (dernier_noeud->next != NULL)
		dernier_noeud = dernier_noeud->next;

	dernier_noeud->next = nouveau_noeud;
	nouveau_noeud->prev = dernier_noeud;

	return (nouveau_noeud);
}
