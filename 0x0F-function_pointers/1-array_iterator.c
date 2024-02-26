#include <stdlib.h>
<<<<<<< HEAD
#include "function_pointers.h"
=======
>>>>>>> 0d839941faa200b33c43b27740682eb969093495

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
<<<<<<< HEAD
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
=======
 *
 * @array: array of int
 * @size: size of array
 * @action: action to be executed
 *
 * Return: void
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

<<<<<<< HEAD
	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
=======
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
