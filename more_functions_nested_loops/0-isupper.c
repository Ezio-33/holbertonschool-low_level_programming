#include "main.h"
/**
*_isupper - fonction qui vérifie si un caractère est majuscule ou non
*@caractere: caractère testé
*Return: renvoie 1 s'il s'agit d'une majuscule, sinon 0
*/

int _isupper(int caractere)
{
	if ((caractere >= 'A') && (caractere <= 'Z'))
	return (1);
	else
	return (0);
}
