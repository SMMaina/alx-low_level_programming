#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
int _strlen1(char *s1);
int _strlen2(char *s2);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isnum(char *num);
char *_memset(char *s, char b, unsigned int n);
int _strlen(char *s);
int main(int argc, char *argv[]);

#endif /* MAIN_H */