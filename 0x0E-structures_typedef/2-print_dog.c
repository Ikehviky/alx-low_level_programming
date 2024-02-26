<<<<<<< HEAD
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 *
 * @d: dog to print
=======
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog struct
 * @d: dog struct pointer
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
<<<<<<< HEAD
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
=======
	if (!d)
		return;

	!d->name ? printf("Name: %p\n", d->name) : printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	!d->owner ? printf("Owner: %p\n", d->owner) : printf("Owner: %s\n", d->owner);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
