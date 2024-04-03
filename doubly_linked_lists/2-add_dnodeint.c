#include "lists.h"

/**
 * add_dnodeint - Ajoute un nouveau nœud au début
 * d'une liste chaînée dlistint_t.
 * @head: Double pointeur vers la tête de la liste.
 * @n: Valeur à stocker dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_noeud;

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->n = n;
	nouveau_noeud->prev = NULL;
	nouveau_noeud->next = *head;

	if (*head != NULL)
		(*head)->prev = nouveau_noeud;
	*head = nouveau_noeud;

	return (nouveau_noeud);
}
