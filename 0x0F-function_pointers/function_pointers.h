#ifndef FUNC_POINT
#define FUNC_POINT
#include <stdio.h>
#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
