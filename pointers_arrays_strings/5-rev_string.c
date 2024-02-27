#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @chaine: La chaîne de caractères à inverser.
 */
void rev_string(char *chaine)
{
	int longueur = 0;
	int debut, fin;
	char temp;

/**Calculer la longueur de la chaîne de caractères */
	while (chaine[longueur] != '\0')
	{
		longueur++;
	}

/** Initialiser les variable de début et de fin pour inverser la chaîne*/
	debut = 0;
	fin = longueur - 1;

/** Inverser la chaîne de caractères en échangeant les caractères*/
	while (debut < fin)
	{
/** Échanger les caractères aux variable début et fin*/
		temp = chaine[debut];
		chaine[debut] = chaine[fin];
		chaine[fin] = temp;

/** Déplacer les variable vers le milieu de la chaîne*/
		debut++;
		fin--;
	}
}
