#include "main.h"

/**
 * binary_to_uint - Convertit une chaîne
 * de caractères binaire en un entier non signé
 * @b: Chaîne de caractères binaire
 * Return: L'entier converti ou 0 si la
 * chaîne est vide ou contient des caractères
 * autres que '0' ou '1'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int resultat = 0;
	int puissance = 1;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			resultat += puissance;
		puissance *= 2;
		i--;
	}

	return (resultat);
}
