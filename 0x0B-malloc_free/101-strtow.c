<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aout[i][j] = str[a1];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_count - counts the number of words in a str
 * @str: string/sentence
 *
 * Return: int
 */
int word_count(char *str)
{
	int wc, i;

	wc = 0;
	if (str[0] != ' ')
		wc = 1;

	i = 1;
	while (str[i])
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != '\0'))
			wc++;
		i++;
	}
	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: string/sentence
 *
 * * Return: char **
 */
char **strtow(char *str)
{
	char **words;
	char *str_cpy;
	int wc, i, j;
	char *token;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			j++;
	}
	if (!j)
		return (NULL);

	str_cpy = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	strcpy(str_cpy, str);

	wc = 0;
	wc = word_count(str);
	words = (char **)malloc(sizeof(char *) * wc + 1);
	i = 0;
	token = strtok(str_cpy, " ");
	while (token != NULL)
	{
		words[i] = (char *)malloc(sizeof(char));
		words[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	words[wc] = NULL;
	return (words);
>>>>>>> 0d839941faa200b33c43b27740682eb969093495
}
