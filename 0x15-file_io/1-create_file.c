#include "main.h"
#include <stdlib.h>

/**
 * append_text - ...
 * @filename: ...
 * @textcontent: ...
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwrote, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
	{
		len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	nwrote = write(fd, text_content, len);

	if (fd == -1 || nwrote == -1)
	{
       		return (-1);
	}

	close(fd);
	return (1);
}
