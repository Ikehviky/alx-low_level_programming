<<<<<<< HEAD
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

return (p);
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of 2
 *
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_size;
	unsigned int i, j, k;
	char *new_str_buf;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if ((int)n < 0)
		return (NULL);

	if (n >= strlen(s2))
		n = strlen(s2);

	s1_size = strlen(s1) + 1;
	new_str_buf = malloc(sizeof(char) * (n + s1_size));

	if (new_str_buf == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < strlen(s1); i++, k++)
		new_str_buf[k] = s1[i];

	for (j = 0; j < n; j++, k++)
		new_str_buf[k] = s2[j];

	new_str_buf[k] = '\0';

	return (new_str_buf);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
