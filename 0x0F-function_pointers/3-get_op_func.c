#include "3-calc.h"
<<<<<<< HEAD

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
=======
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: sign
 *
 * Return: pointer to function thats returns int
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
<<<<<<< HEAD

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

=======
	while (ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);

		i++;
	}
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	return (NULL);
}
