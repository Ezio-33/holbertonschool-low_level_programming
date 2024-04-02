#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Libère la mémoire allouée pour une liste_t
 * @head: Pointeur vers le début de la liste
 */
void free_list(list_t *head)
{
	list_t *noeud_a_liberer;

	while (head != NULL)
	{
		noeud_a_liberer = head;
		head = head->next;
		free(noeud_a_liberer->str);
		free(noeud_a_liberer);
	}
}
