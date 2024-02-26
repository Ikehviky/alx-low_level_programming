<<<<<<< HEAD
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@d: array
 *@name: name
 *@age: age
 *@owner: owner
 * Description: This struct is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
=======
#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
<<<<<<< HEAD

=======
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
