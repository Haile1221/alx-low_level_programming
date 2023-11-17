#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
	while (*haystack != '\0') {
		char *startHaystack = haystack;
		char *subNeedle = needle;

		while (*haystack == *subNeedle && *subNeedle != '\0') {
			haystack++;
			subNeedle++;
		}

		if (*subNeedle == '\0') {
			return startHaystack;
		}

		haystack = startHaystack + 1;
	}

	return NULL;
}

