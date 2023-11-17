#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strncpy - Copies n characters from source to destination
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n) {
	char *originalDest = dest;

	while (*src != '\0' && n > 0) {
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0) {
		*dest = '\0';
		dest++;
		n--;
	}

	return originalDest;
}

