#include <stdlib.h>  /* Include standard library for malloc and free */
#include "main.h"    /* Include your main header file */

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: String to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int words = 0, in_word = 0;

	/* Iterate through the characters in the string */
	while (*str)
	{
		/* Check if the character is a space */
		if (*str == ' ')
			in_word = 0;  /* Set in_word flag to 0 if a space is encountered */
		else if (!in_word)
		{
			in_word = 1;  /* Set in_word flag to 1 if entering a new word */
			words++;     /* Increment the word count */
		}

		str++;  /* Move to the next character in the string */
	}

	return (words);  /* Return the total number of words */
}

/**
 * strtow - Splits a string into words.
 * @str: String to split.
 *
 * Return: Pointer to an array of strings (success) or NULL (failure).
 */
char **strtow(char *str)
{
	char **matrix, *word;
	int i, k = 0, words, start, end;

	/* Check if the input string is NULL or empty */
	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words in the string */
	words = count_words(str);

	/* If there are no words, return NULL */
	if (words == 0)
		return (NULL);

	/* Allocate memory for the matrix of strings */
	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	/* Check if memory allocation was successful */
	if (matrix == NULL)
		return (NULL);

	/* Iterate through each word in the string */
	for (i = 0; i < words; i++)
	{
		/* Skip leading spaces in the string */
		while (*str == ' ')
			str++;

		start = end = 0;

		/* Find the end index of the current word */
		while (str[end] && str[end] != ' ')
			end++;

		/* Allocate memory for the current word */
		word = (char *)malloc(sizeof(char) * (end - start + 1));

		/* Check if memory allocation for the word was successful */
		if (word == NULL)
		{
			/* Free previously allocated memory and return NULL */
			for (i = 0; i < k; i++)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}

		/* Copy the characters of the current word to the allocated memory */
		for (int j = start; j < end; j++)
			word[j - start] = str[j];

		word[end - start] = '\0';  /* Null-terminate the word */
		matrix[k++] = word;        /* Add the word to the matrix */
		str += end;                /* Move to the next word in the string */
	}

	matrix[k] = NULL;  /* Null-terminate the matrix of strings */

	return (matrix);  /* Return the matrix of strings */
}

