#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		} else if (_isdigit(*s))
{
			result = result * 10 + (*s - '0');
		} else if (result > 0)
{
			break;
		}

		s++;
	}

	return (result * sign);
}

