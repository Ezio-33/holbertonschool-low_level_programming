#include "main.h"
/**
* _strcat - Concatène deux chaînes
* @dest: Chaîne de destination
* @src: Chaîne source à concaténer
* Return: Pointeur vers la chaîne résultante dest
*/
char *_strcat(char *dest, char *src)
{
	int longueur_dest = 0;
	int longueur_src = 0;

	while (dest[longueur_dest] != '\0')
	{
		longueur_dest++;
	}

	while (src[longueur_src] != '\0')
	{
		dest[longueur_dest] = src[longueur_src];
		longueur_dest++;
		longueur_src++;
	}
	dest[longueur_dest] = '\0';
	return (dest);
}
