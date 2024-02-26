<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;
=======
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates new copy of string
 * @str: string to be copied.
 *
 * Return: pointer to char.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;
>>>>>>> 0d839941faa200b33c43b27740682eb969093495

	if (str == NULL)
		return (NULL);

<<<<<<< HEAD
	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
=======
	new_str = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= (int)strlen(str); i++)
	{
		*(new_str + i) = *(str + i);
	}
	return (new_str);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
