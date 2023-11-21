#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of strings representing the arguments.
 *  Return: A pointer to a new string containing concatenated arguments
 * followed by '\n', or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++; /* for the newline character */
	}

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}

	str[pos] = '\0'; /* Null-terminate the string */
	return (str);
}

