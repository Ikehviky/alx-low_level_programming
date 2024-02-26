<<<<<<< HEAD
#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
=======
/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: compare callback function
 *
 * Return: int
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

<<<<<<< HEAD
=======
	if (size <= 0)
		return (-1);

>>>>>>> 0d839941faa200b33c43b27740682eb969093495
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
<<<<<<< HEAD
			if (cmp(array[i]) != 0)
=======
			if (cmp(array[i]))
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
				return (i);
		}
	}

	return (-1);
}
