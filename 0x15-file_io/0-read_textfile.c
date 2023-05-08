#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read text
 * @filename: ...
 * @letters: ...
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, nread, nwrote;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	nread = read(fd, buffer, letters);
	nwrote = write(STDOUT_FILENO, buffer, nread);

	free(buffer);
	close(fd);
	return (nwrote);
}
