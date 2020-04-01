#include "holberton.h"

/**
  *main - program that copies the content of a file to another file.
  *@ac: arguments
  *@av: file to copy
  *Return: 0;
  */

int main(int ac, char *av[])
{
	int open_f, open_f2, write_f2, read_f = 0;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	open_f = open(av[1], O_RDONLY);

	if (open_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	open_f2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (open_f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	read_f = 1024;

	while (read_f == 1024)
	{
		read_f = read(open_f, buf, 1024);
		write_f2 = write(open_f2, buf, read_f);
	}

	if (read_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (write_f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	if (close(open_f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_f), exit(100);

	if (close(open_f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_f2), exit(100);

	return (0);


}
