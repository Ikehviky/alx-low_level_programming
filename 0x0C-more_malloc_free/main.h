<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
=======
#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
