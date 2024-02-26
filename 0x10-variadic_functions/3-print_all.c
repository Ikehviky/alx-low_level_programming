<<<<<<< HEAD
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
=======
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = -1;
	char *str, *str_fmt = "%s%p", *comma = "";
	va_list args;

	if (format)
	{
		va_start(args, format);
		while (format[++i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", comma, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", comma, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str)
						str_fmt = "%s%s";
					printf(str_fmt, comma, str);
					break;
				default:
					continue;
			}
			comma = ", ";
		}
		va_end(args);
	}
	printf("\n");
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
