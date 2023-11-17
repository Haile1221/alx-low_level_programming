#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src) {
	char *originalDest = dest;

	while (*dest != '\0') {
		dest++;
	}

	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return originalDest;
}

