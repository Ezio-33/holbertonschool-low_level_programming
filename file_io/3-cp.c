#include "main.h"

/**
 * main - Copie le contenu d'un fichier vers un autre fichier.
 * @argc: Le nombre d'arguments.
 * @argv: Un tableau contenant les arguments.
 * Return: 0 en cas de succès, un code d'erreur en cas d'échec.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to;
    ssize_t bytes_read, bytes_written;
    char buffer[1024];
    mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
    if (file_to == -1)
    {
        close(file_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        return (99);
    }

    while ((bytes_read = read(file_from, buffer, 1024)) > 0)
    {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            close(file_from);
            close(file_to);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            return (99);
        }
    }

    if (bytes_read == -1)
    {
        close(file_from);
        close(file_to);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        return (100);
    }

    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        return (100);
    }

    return (0);
}