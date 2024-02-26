<<<<<<< HEAD
#include <stdlib.h>
#include "dog.h"

/**
 * _copy  -   Make a copy of passed in argument
 * @src:      Data to make copy of
 * Return:    Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog     - Create a new dog variable
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	snoopie = malloc(sizeof(dog_t));
	if (snoopie == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(snoopie);
		return (NULL);
	}
	(*snoopie).name = new_name;

	(*snoopie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*snoopie).name);
		free(snoopie);
		return (NULL);
	}
	(*snoopie).owner = new_owner;

	return (snoopie);
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name;
	char *_owner;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->age = age;

	if (name)
	{
		_name = malloc(sizeof(char) * (strlen(name) + 1));
		if (!_name)
		{
			free(d);
			return (NULL);
		}
		d->name = strcpy(_name, name);
	}
	else
		d->name = NULL;

	if (owner)
	{
		_owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (!_owner)
		{
			free(_name);
			free(d);
			return (NULL);
		}
		d->owner = strcpy(_owner, owner);
	}
	else
		d->owner = NULL;

	return (d);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
