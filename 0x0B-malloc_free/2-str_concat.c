#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings and returns a new string.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: Returns a pointer to a newly allocated space in memory containing
 *         the contents of s1 followed by the contents of s2, and null-terminated.
 *         If NULL is passed, treat it as an empty string.
 *         Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1, len2, i, j;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation was successful */
	if (concatenated == NULL)
		return (NULL);

	/* Copy the contents of s1 to concatenated */
	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];

	/* Copy the contents of s2 to concatenated */
	for (j = 0; s2[j] != '\0'; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}

