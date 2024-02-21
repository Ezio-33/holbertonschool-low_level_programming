#include "main.h"

/**
 * _islower - Vérifier si un caractère est minuscule.
 * @Lettre: Le caractère à vérifier.
 * Return: 1 si Lettre est en minuscules, 0 si en maguscule.
 */
int _islower(int Lettre)
{
	if (Lettre >= 'a' && Lettre <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
