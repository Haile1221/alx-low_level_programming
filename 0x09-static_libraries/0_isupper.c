#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to be checked
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

