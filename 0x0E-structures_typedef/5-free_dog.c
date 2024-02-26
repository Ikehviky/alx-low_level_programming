<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
#include <stdlib.h>
#include "dog.h"

/**
<<<<<<< HEAD
 * free_dog - free memory
 *@d: array
 * Description: Free memory for struct
 */

=======
 * free_dog - frees memory of dog
 * @d: dog struct
 *
 * Return: void
 */
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
void free_dog(dog_t *d)
{
	if (d)
	{
<<<<<<< HEAD
		free(d->name);
		free(d->owner);
=======
		free(d->owner);
		free(d->name);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
		free(d);
	}
}
