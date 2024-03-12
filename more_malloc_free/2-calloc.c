#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pour
 * un tableau et l'initialise a  zéro
 * @nmemb: Nombre d'éléments du tableau
 * @size: Taille en octets de chaque élément
 *
 * Return: Mémoire allouze et initialisée a zéro
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size = nmemb * size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

