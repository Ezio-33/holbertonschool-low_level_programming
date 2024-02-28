#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier.
 * @chaine: Chaîne à convertir.
 *
 * Return: L'entier converti depuis la chaîne.
 */
int _atoi(char *chaine)
{
	int index, nbSignesMoins, nombre, longueur, trouveChiffre, chiffre;

	index = 0;
	nbSignesMoins = 0;
	nombre = 0;
	longueur = 0;
	trouveChiffre = 0;
	chiffre = 0;

	while (chaine[longueur] != '\0')
		longueur++;
	while (index < longueur && !trouveChiffre)
	{
		if (chaine[index] == '-')
			++nbSignesMoins;
		if (chaine[index] >= '0' && chaine[index] <= '9')
		{
			chiffre = chaine[index] - '0';
			if (nbSignesMoins % 2)
				chiffre = -chiffre;
			nombre = nombre * 10 + chiffre;
			trouveChiffre = 1;
			if (chaine[index + 1] < '0' || chaine[index + 1] > '9')
				break;
			trouveChiffre = 0;
		}
		index++;
	}
	if (!trouveChiffre)
		return (0);
	return (nombre);
}
