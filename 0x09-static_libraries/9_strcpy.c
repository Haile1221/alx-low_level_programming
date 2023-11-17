#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - Copies a string from source to destination
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src) {
	char *originalDest = dest;

	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return originalDest;
}

