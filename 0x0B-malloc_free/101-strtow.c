#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimesional array.
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
	unsigned int c, height, i, j, al;

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
	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - al + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
			for (j = 0; al <= c; al++, j++)
				aout[i][j] = str[al];
			aout[i][j] = '\0';
		}

		aout[i] = NULL;
		return (aout);
	}
}
