#include "main.h"
/**
 * print_last_digit - Imprime le dernier chiffre d'un nombre et le retourne
 * @nombre: Le nombre dont on veut imprimer et retourner le dernier chiffre
 * Return: La valeur du dernier chiffre du nombre
 */
int print_last_digit(int nombre)
{
	int dernier_chiffre;

	dernier_chiffre = nombre % 10;
		if (dernier_chiffre < 0)
		{
		dernier_chiffre = -dernier_chiffre;
		}
		_putchar(dernier_chiffre + '0');
	return (dernier_chiffre);
}
