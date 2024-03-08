#include "main.h"

/**
* *_strchr - Cherche un caractère dans une chaîne de caracter.
* @chaine: Chaîne de caractères dans laquelle chercr.
* @caractere: Caractère a recherche.
* Return: Pointe vers la première occurrence du caract
* ou NULL si non trouv.
*/
char *_strchr(char *chaine, char caractere)
{
	while (*chaine++)
	{
		if (*chaine == caractere)
		{
			return (chaine);
		}
	}
	return ('\0');
}

