#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
