<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, limit;
=======
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char *.
 */
char *str_concat(char *s1, char *s2)
{
	int size, s1_len, s2_len;
	int i, j;
	char *new_sptr;
>>>>>>> 0d839941faa200b33c43b27740682eb969093495

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

<<<<<<< HEAD
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];

	return (strout);
=======
	s1_len = (int)strlen(s1);
	s2_len = (int)strlen(s2);
	size = s1_len + s2_len + 1;

	new_sptr = (char *) malloc(sizeof(char) * size);
	if (!new_sptr)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		*(new_sptr + i) = *(s1 + i);

	for (j = 0; i <= size; i++, j++)
		*(new_sptr + i) = *(s2 + j);

	return (new_sptr);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
