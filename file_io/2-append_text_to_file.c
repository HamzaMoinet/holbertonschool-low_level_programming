#include "main.h"
/**
 *append_text_to_file - append
 *@filename: name of file
 *@text_content: content text
 *Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lg = 0;
	int open_var;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[lg])
	{
		lg++;
	}
	open_var = write(fd, text_content, lg);
	close(fd);
	if (open_var == -1)
	{
		return (-1);
	}
	return (1);
}
