#ifndef HEADER_FILE
#define HEADER_FILE

void print_name(char *name, void (*f)(char *));

typedef int size_t;

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
