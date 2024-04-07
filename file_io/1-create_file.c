#include "main.h"

/**
 * create_file - Crée un fichier avec le contenu texte spécifié.
 * @nom_fichier: Le nom du fichier à créer.
 * @contenu_texte: Le contenu textuel à écrire dans le fichier.
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int create_file(const char *nom_fichier, char *contenu_texte)
{
	int fichier;
	ssize_t nombre_ecrits;

	if (nom_fichier == NULL)
		return (-1);

	fichier = open(nom_fichier,
				   O_CREAT | O_WRONLY | O_TRUNC,
				   0600);
	if (fichier == -1)
		return (-1);

	if (contenu_texte != NULL)
	{
		nombre_ecrits = write(fichier,
							  contenu_texte,
							  strlen(contenu_texte));
		if (nombre_ecrits == -1 || (size_t)nombre_ecrits != strlen(contenu_texte))
		{
			close(fichier);
			return (-1);
		}
	}

	close(fichier);
	return (1);
}
