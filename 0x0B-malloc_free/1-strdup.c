#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string and returns a pointer to the duplicated string.
 *
 * @str: The string to be duplicated.
 *
 * Return: Returns NULL if str is NULL or if insufficient memory was available.
 *         Returns a pointer to the duplicated string on success.
 *         The returned pointer should be freed using free() when no longer needed.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length, i;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	length = 0;
	while (str[length] != '\0')
		length++;

	/*  Allocate memory for the duplicated string */
	duplicate = malloc(sizeof(char) * (length + 1));

	/* Check if memory allocation was successful */
	if (duplicate == NULL)
		return (NULL);

	/* Copy the contents of the input string to the duplicated string */
	for (i = 0; str[i] != '\0'; i++)
		duplicate[i] = str[i];

	/* Null-terminate the duplicated string */
	duplicate[i] = '\0';

	return (duplicate);
}

