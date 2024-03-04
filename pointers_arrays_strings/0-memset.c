#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec un octet constant
 * @zone_memoire: Zone mémoirea remplir
 * @octet_constant: Octet a copier
 * @n: Nombre de répétitions de l'oct a copier
 * Return: Pointeur vers la zone mémoire remplie
 */
char *_memset(char *zone_memoire, char octet_constant, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		zone_memoire[i] = octet_constant;
	}
	return (zone_memoire);
}

