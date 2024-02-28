#include "main.h"
/**
* _strcpy - Copie la chaîne source dans le tampon de destination.
* @dest: Pointeur vers le tampon de destination.
* @src: Pointeur vers la chaîne source à copier.
* Return: Le pointeur vers le tampon de destination.
*/
char *_strcpy(char *dest, char *src)
{
	char *debut = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (debut);
}
