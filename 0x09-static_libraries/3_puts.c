#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _puts - Writes a string to the standard output (stdout)
 * @s: The string to be written
 */
void _puts(char *s) {
	while (*s != '\0') {
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}

