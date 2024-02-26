<<<<<<< HEAD
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
=======
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: seperator format
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = n;

	if (n > 0)
	{
		va_start(args, n);
		while (i--)
		{
			printf("%d", va_arg(args, int));
			if ((i > 0) && separator)
				printf("%s", separator);
		}
		va_end(args);
	}
	putchar(10);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
