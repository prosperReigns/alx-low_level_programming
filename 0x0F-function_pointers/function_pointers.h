#include <stddef.h>
#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/**
 *struct array_size
 *{
 *	long unsigned int array_len;
 *}size = {array_len};
 *
 *typedef struct array_size size_t;
 */

#endif
