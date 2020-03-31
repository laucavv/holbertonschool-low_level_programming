#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file to append
 * @text_content: file content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_f, write_f, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	open_f = open(filename, O_APPEND | O_WRONLY);

	if (open_f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}

	write_f = write(open_f, text_content, len);

	if (write_f == -1)
	{
		return (-1);
	}
	close(open_f);
	return (1);



}
