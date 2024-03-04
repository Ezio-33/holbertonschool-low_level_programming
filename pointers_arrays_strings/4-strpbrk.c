#include "main.h"

/**
 * _strpbrk - Cherche le premier occurence d'un
 * caractère dans une chaîne
 * @s: Chaîne à analyser
 * @accept: Chaîne contenant les caractères à rechercher
 * Return: Pointeur vers le premier occurence ou
 * NULL si non trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	int position_s = 0, position_accept;

	while (s[position_s] != '\0')
	{
		position_accept = 0;
		while (accept[position_accept] != '\0')
		{
			if (s[position_s] == accept[position_accept])
			{
				return (&s[position_s]);
			}
			position_accept++;
		}
		position_s++;
	}
	return (NULL);
}

