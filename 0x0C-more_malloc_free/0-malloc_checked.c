<<<<<<< HEAD
=======
#include <stdlib.h>
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
<<<<<<< HEAD
 * @b: bytes allocate
 * Return: pointer
 */
=======
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

>>>>>>> 0d839941faa200b33c43b27740682eb969093495
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
<<<<<<< HEAD
	if (ptr == NULL)
		exit(98);
=======

	if (ptr == NULL)
		exit(98);

>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	return (ptr);
}
