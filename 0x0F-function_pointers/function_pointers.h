#ifndef MAIN_H
#include <stddef.h>
#define MAIN_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

