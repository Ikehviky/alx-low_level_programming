#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;
=======
#include <stdbool.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int (*main_address)(int, char**) = main;
	int i;
	unsigned char c;
>>>>>>> 0d839941faa200b33c43b27740682eb969093495

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

<<<<<<< HEAD
	bytes = atoi(argv[1]);

	if (bytes < 0)
=======
	if (atoi(argv[1]) <= 0)
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	{
		printf("Error\n");
		exit(2);
	}
<<<<<<< HEAD

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
=======
	i = 0;

	while (true)
	{
		c = *(unsigned char *)main_address;

		if (i == atoi(argv[1]) - 1)
		{
			printf("%02x", c);
			break;
		}
		printf("%02x ", c);
		i++;
		main_address++;
	}
	putchar(10);

>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	return (0);
}
