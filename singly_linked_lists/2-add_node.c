#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste_t
 * @head: Pointeur de pointeur vers le début de la liste
 * @str: Chaîne de caractères à dupliquer dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveau_noeud;
	unsigned int longueur;

	nouveau_noeud = malloc(sizeof(list_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->str = strdup(str);
	if (nouveau_noeud->str == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}

	longueur = 0;
	while (str[longueur])
		longueur++;
	nouveau_noeud->len = longueur;

	nouveau_noeud->next = *head;
	*head = nouveau_noeud;

	return (nouveau_noeud);
}
