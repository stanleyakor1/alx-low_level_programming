#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
#include <stdlib.h>
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
