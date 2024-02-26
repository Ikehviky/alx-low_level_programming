<<<<<<< HEAD
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char **argv)
{
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
<<<<<<< HEAD

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
=======
	if (!get_op_func(argv[2]))
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	{
		printf("Error\n");
		exit(99);
	}
<<<<<<< HEAD

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
=======
	if ((!strcmp(argv[2], "/") && !strcmp(argv[3], "0")) ||
			(!strcmp(argv[2], "%") && !strcmp(argv[3], "0")))
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	{
		printf("Error\n");
		exit(100);
	}

<<<<<<< HEAD
	result = func(arg1, arg2);

	printf("%d\n", result);

=======
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	return (0);
}
