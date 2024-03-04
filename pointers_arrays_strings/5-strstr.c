#include "main.h"

/**
 * _strstr - Cherche la première occurence d'une sous-chaîne
 * @haystack: Chaîne principale a analyser
 * @needle: Sous-chaîne à rechercher
 * Return: Pointeur vers le début de la sous-chaîne ou NULL si non trouvé
 */
char *_strstr(char *haystack, char *needle)
{
	int position_haystack = 0, position_needle;

	while (haystack[position_haystack] != '\0')
	{
		position_needle = 0;
		while (needle[position_needle] != '\0' &&
			haystack[position_haystack + position_needle] == needle[position_needle])
		{
			position_needle++;
		}
		if (needle[position_needle] == '\0')
		{
			return (&haystack[position_haystack]);
		}
		position_haystack++;
	}
	return (NULL);
}

