#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string
 * @s1: String to append to
 * @s2: String to concatenate from
 * @n: Number of bytes from s2 to concatenate to s1
 *
 * Return: Pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s; /* Pointer to hold the resulting string */
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/* Calculate the length of s1 */
	while (s1 && s1[len1])
		len1++;

	/* Calculate the length of s2 */
	while (s2 && s2[len2])
		len2++;

	/* Determine the size of memory needed for the resulting string */
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation was successful */
	if (!s)
		return (NULL);

	/* Copy characters from s1 to the resulting string */
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	/* Copy the first n bytes of s2 to the resulting string */
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	/* If n is greater or equal to len2, use the entire string s2 */
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	/* Null-terminate the resulting string */
	s[i] = '\0';

	return (s);
}

