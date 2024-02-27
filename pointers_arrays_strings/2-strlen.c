#include "main.h"
/**
* _strlen - Calcule la longueur d'une chaîne de caractères.
* @s: Le pointeur vers la chaîne de caractères
* dont on veut connaître la longueur.
* Return: La longueur de la chaîne de caractères (entier positif).
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
