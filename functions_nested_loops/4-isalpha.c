#include "main.h"

/**
 * _isalpha - Vérifier si un caractère est minuscule ou majuscule.
 * @Lettre: Le caractère à vérifier.
 * Return: 1 si Lettre est en minuscule ou majuscule,
 * 0 si c'est un autre caractère.
 */
int _isalpha(int Lettre)
{
	if ((Lettre >= 'a' && Lettre <= 'z') || (Lettre >= 'A' && Lettre <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
