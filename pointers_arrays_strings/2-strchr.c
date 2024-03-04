#include "main.h"

/**
 * _strchr - Cherche un caractère dans une chaîne de caractères
 * @chaine: Chaîne de caractères dans laquelle chercher
 * @caractere: Caractère a rechercher
 * return: Pointe vers la première occurrence du caractè,
 * ou NULL si non trouvé
 */
char *_strchr(char *chaine, char caractere)
{
	while (*chaine != '\0')
	{
		if (*chaine == caractere)
		{
			return (chaine);
		}
		chaine++;
	}
	return (NULL);
}

