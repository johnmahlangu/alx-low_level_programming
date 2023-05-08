#include "main.h"
#include <stdlib.h>

/**
 * append_text - append text
 * @filename: ...
 * @text_content: ...
 * Return: 1 on success and -1 on failure
 */

int append_text(const char *filename, char *text_content)
{
	int fd, nwrote, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	fd = open(filename, O_WRONLY | O_APPEND);
	nwrote = write(fd, text_content, len);

	if (fd == -1 || nwrote == -1)
		return (-1);

	close(fd);

	return (1);
}
