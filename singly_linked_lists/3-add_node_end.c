#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste_t
 * @head: Pointeur de pointeur vers le début de la liste
 * @str: Chaîne de caractères à dupliquer dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nouveau_noeud, *dernier_noeud;
	unsigned int longueur;

	/* Allouer de la mémoire pour le nouveau nœud */
	nouveau_noeud = malloc(sizeof(list_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	/** Dupliquer la chaîne de caractères*/
	nouveau_noeud->str = strdup(str);
	/** si la chaîne de caractères est NULL, on libère la memoire*/
	if (nouveau_noeud->str == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}
	longueur = 0;
	while (str[longueur])
		longueur++;
	nouveau_noeud->len = longueur;

	/** Initialiszton du pointeur "next" du nouveau nœud à NULL */
	nouveau_noeud->next = NULL;

	/** Si la liste est vide, le nouveau nœud devient le premier */
	if (*head == NULL)
	{
		*head = nouveau_noeud;
		return (nouveau_noeud);
	}
	/** Sinon, parcourir la liste jusqu'au dernier nœud */
	dernier_noeud = *head;
	while (dernier_noeud->next != NULL)
		dernier_noeud = dernier_noeud->next;

	/** Ajouter le nouveau nœud à la fin de la liste */
	dernier_noeud->next = nouveau_noeud;

	return (nouveau_noeud);
}
