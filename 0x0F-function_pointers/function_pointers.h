<<<<<<< HEAD
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
=======
#ifndef FP_H
#define FP_H
>>>>>>> 0d839941faa200b33c43b27740682eb969093495

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
<<<<<<< HEAD


#endif
=======
#endif /* FP_H */
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
