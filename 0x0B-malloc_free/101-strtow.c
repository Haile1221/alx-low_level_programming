#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: String to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int flag = 0, words = 0;

	for (; *str != '\0'; str++)
	{
		if (*str == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: String to split.
 *
 * Return: Pointer to an array of strings (success) or NULL (failure).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (str[len])
		len++;
	words = count_words(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
				{
					// Handle memory allocation failure
					for (int j = 0; j < k; j++)
						free(matrix[j]);
					free(matrix);
					return (NULL);
				}

				for (int j = 0; j < c; j++)
					tmp[j] = str[start + j];
				tmp[c] = '\0';

				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

