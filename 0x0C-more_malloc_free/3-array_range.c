<<<<<<< HEAD
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
=======
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun integer
 * @max: maximum integer
 *
 * Return: int*
 */
int *array_range(int min, int max)
{
	int arr_size, i, j;
	int *ptr;

	if (min > max)
		return (NULL);

	arr_size = (max - min) + 1;

	ptr = malloc(sizeof(int) * arr_size);

	if (!ptr)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;

	return (ptr);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
