<<<<<<< HEAD
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
=======
#include <stdarg.h>

/**
 * sum_them_all - sum all numbers
 * @n: number of variadic arguments
 *
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i = n;

	if (n <= 0)
		return (0);

	va_start(args, n);
	while (i-- != 0)
		sum += va_arg(args, int);
	va_end(args);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495

	return (sum);
}
