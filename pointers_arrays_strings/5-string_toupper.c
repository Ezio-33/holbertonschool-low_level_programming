#include "main.h"

/**
* string_toupper - transforme toutes les lettres minuscules d'une chaîne
* en majuscules
* @s : chaîne à modifier
* Return: la chaîne de caractères
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
