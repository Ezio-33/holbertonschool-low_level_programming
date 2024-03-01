#include "main.h"

/**
* _strncat - Concatène deux chaînes en utilisant au plus n caractères de src
* @dest: Chaîne de destination
* @src: Chaîne source à concaténer
* @n: Nombre maximal de caractères à utiliser de src
* Return: Pointeur vers la chaîne résultante dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int longueur_dest = 0;
	int longueur_src = 0;

	while (dest[longueur_dest] != '\0')
	{
		longueur_dest++;
	}
	while (src[longueur_src] != '\0' && longueur_src < n)
	{
		dest[longueur_dest] = src[longueur_src];
		longueur_dest++;
		longueur_src++;
	}
	dest[longueur_dest] = '\0';
	return (dest);
}
