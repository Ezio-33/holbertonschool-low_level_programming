#include "main.h"

/**
 * _strspn - Calcule la longueur du préfixe d'une chaîne
 * composé uniquement de caractères acceptés
 * @s: Chaîne à analyser
 * @accept: Chaîne contenant les caractères acceptés
 * Return: Nombre d'octets dans le segment initial de s
 * composé uniquement de caractères acceptés
 */
unsigned int _strspn(char *s, char *accept)
{
	int position_s = 0, position_accept, compteur = 0, caractere;

	while (s[position_s] != '\0')
	{
		caractere = 0;
		position_accept = 0;
		while (accept[position_accept] != '\0')
		{
			if (s[position_s] == accept[position_accept])
			{
				compteur++;
				caractere = 1;
			}
			position_accept++;
		}
		if (caractere == 0)
		{
			return (compteur);
		}
		position_s++;
	}

	return (0);
}

