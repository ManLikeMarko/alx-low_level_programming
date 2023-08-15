#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_calloc(unsigned int nmend, unsigned int size);
int _putchar(char c);
void _puts(char *str);
int _atoi(const char *s);
void print_int(unsigned long int n);

#endif

