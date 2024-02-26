<<<<<<< HEAD
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
=======
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: seperator format
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = n;
	char *str;

	if (n > 0)
	{
		va_start(args, n);
		while (i--)
		{
			str = va_arg(args, char *);

			str ? printf("%s", str) :
				printf("%p", str);

			if ((i > 0) && separator)
				printf("%s", separator);
		}
		va_end(args);
	}
	putchar(10);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
