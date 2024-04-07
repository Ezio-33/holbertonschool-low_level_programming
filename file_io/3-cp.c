#include "main.h"

/**
 * exists - Vérifie si un fichier existe et peut être lu/écrit.
 * @file_from: Le descripteur de fichier du fichier source.
 * @file_to: Le descripteur de fichier du fichier de destination.
 * @argv: Le tableau des arguments.
 */
void exists(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copie le contenu d'un fichier vers un autre fichier.
 * @argc: Le nombre d'arguments.
 * @argv: Un tableau contenant les arguments.
 * Return: 0 en cas de succès, un code d'erreur en cas d'échec.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	exists(file_from, file_to, argv);

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			exists(0, -1, argv);
		}
	}

	if (bytes_read == -1)
	{
		exists(-1, 0, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}

	return (0);
}
