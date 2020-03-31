#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: file to read
 * @letters: number of letters to print
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, read_f, write_f;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters);

	if (buf == NULL)
	{
		return (0);
	}

	open_f = open(filename, O_RDONLY);
	read_f = read(open_f, buf, letters);
	write_f = write(STDOUT_FILENO, buf, read_f);

	if (open_f == -1 || read_f == -1 || write_f == -1)
	{
		free(buf);
		return (0);

	}
	free(buf);
	close(open_f);
	return (write_f);
}
