#include "main.h"

/**
 * binary_to_uint - convertit une chaîne
 *  de caractères binaire en un entier non signé
 * @b: chaîne de caractères binaire
 *
 * Return: la valeur convertie ou 0 si
 * la chaîne est vide ou contient des caractères
 * autres que '0' ou '1'
 */
unsigned int
binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (*b == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result = result * 2 + 1;
		else
			result *= 2;
		i++;
	}

	return (result);
}
