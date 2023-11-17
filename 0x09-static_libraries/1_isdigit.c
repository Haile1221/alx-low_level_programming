#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c) {
	return (c >= '0' && c <= '9');
}

