#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, terminates with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	/* Declare a pointer to hold the allocated memory */
	void *ptr;

	/* Allocate memory using malloc */
	ptr = malloc(b);

	/* Check if malloc was successful */
	if (ptr == NULL)
	{
		/* If malloc failed, terminate with status value of 98 */
		exit(98);
	}

	/* Return the pointer to the allocated memory */
	return (ptr);
}

