#include "main.h"
/**
 *read_textfile - read text file
 *@filename: filename
 *@letters: letters
 *Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lec, print;
	int fd = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lec = read(fd, buffer, letters);
	if (lec == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	print = write(STDOUT_FILENO, buffer, lec);
	free(buffer);
	close(fd);
	return (print);
}
