#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Lit un fichier texte et
 * l'affiche.
 * @nom_fichier: Le nom du fichier à lire.
 * @nombre_lettres: Le nombre de lettres à lire et à afficher.
 * Return: Le nombre réel de lettres lues et imprimées, ou 0 en cas d'échec.
 */
ssize_t read_textfile(const char *nom_fichier, size_t nombre_lettres)
{
	int descripteur_fichier;
	char *tampon;
	ssize_t nombre_lus, nombre_ecrits;

	if (nom_fichier == NULL)
		return (0);

	descripteur_fichier = open(nom_fichier, O_RDONLY);
	if (descripteur_fichier == -1)
		return (0);

	tampon = malloc(sizeof(char) * (nombre_lettres + 1));
	if (tampon == NULL)
	{
		close(descripteur_fichier);
		return (0);
	}

	nombre_lus = read(descripteur_fichier, tampon, nombre_lettres);
	if (nombre_lus == -1)
	{
		free(tampon);
		close(descripteur_fichier);
		return (0);
	}

	tampon[nombre_lus] = '\0';
	nombre_ecrits = write(STDOUT_FILENO, tampon, nombre_lus);
	if (nombre_ecrits != nombre_lus)
	{
		free(tampon);
		close(descripteur_fichier);
		return (0);
	}

	free(tampon);
	close(descripteur_fichier);
	return (nombre_lus);
}
