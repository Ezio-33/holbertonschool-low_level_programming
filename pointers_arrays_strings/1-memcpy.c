#include "main.h"

/**
 * _memcpy - Copie une zone mémoire
 * @destination: Zone mémoire de destination
 * @source: Zone mémoirea copier
 * @nb_octets: Nombre d'octets a copier
 * Return: zone mémoire de destination
 */
char *_memcpy(char *destination, char *source, unsigned int nb_octets)
{
	unsigned int i;

	for (i = 0; i < nb_octets; i++)
	{
		destination[i] = source[i];
	}
	return (destination);
}

