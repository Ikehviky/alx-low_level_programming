#ifndef CALC_H
#define CALC_H

<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

=======
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
<<<<<<< HEAD

#endif
=======
#endif /* CALC_H */
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
