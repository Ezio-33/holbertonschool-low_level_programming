#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @nom_fichier: Le nom du fichier.
 * @contenu_texte: Le contenu textuel à ajouter.
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *nom_fichier, char *contenu_texte)
{
	int fichier;
	ssize_t nombre_ecrits;

	if (nom_fichier == NULL)
		return (-1);

	fichier = open(nom_fichier, O_WRONLY | O_APPEND);
	if (fichier == -1)
		return (-1);

	if (contenu_texte != NULL)
	{
		nombre_ecrits = write(fichier,
							  contenu_texte, strlen(contenu_texte));
		if (nombre_ecrits == -1)
		{
			close(fichier);
			return (-1);
		}
	}

	close(fichier);
	return (1);
}
