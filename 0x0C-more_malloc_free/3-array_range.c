#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum range of values stored
 * @max: Maximum range of values stored and number of elements
 *
 * Return: Pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;  /* Pointer to hold the newly created array */
	int i, size;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array using malloc */
	ptr = malloc(sizeof(int) * size);

	/* Check if malloc was successful */
	if (ptr == NULL)
		return (NULL);

	/* Populate the array with values from min to max */
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	/* Return the pointer to the newly created array */
	return (ptr);
}

