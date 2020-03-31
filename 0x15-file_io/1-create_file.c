#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int open_f, write_f, len = 0;

	if (filename == NULL)
	{
		return(-1);
	}
	open_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (open_f == -1)
	{
		return (-1);
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	write_f = write(open_f, text_content,len);

	if (write_f == -1)
	{
		return(-1);
	}
	close(open_f);
	return (1);



}
