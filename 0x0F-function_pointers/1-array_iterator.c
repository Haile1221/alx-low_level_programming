#include "function_pointers.h"
#include <stdio.h>

/*
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 *
 * Description:
 * This function iterates over each element of the array and
 *  applies the provided action function to it. The action function
 *  should take an integer as a parameter
 * and return void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

/*
 * print_element - prints an integer element
 * @num: integer element to be printed
 *
 * Description:
 * This function prints the given integer element.
 */
void print_element(int num)
{
	printf("%d ", num);
}

/*
 * square_element - squares an integer element
 * @num: integer element to be squared
 *
 * Description:
 * This function squares the given integer element and prints the result.
 */
void square_element(int num)
{
	printf("%d ", num * num);
}

/*
 * main - entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	/* Print each element */
	printf("Printing elements of the array:\n");
	array_iterator(arr, size, print_element);
	printf("\n");

	/*  Square each element */
	printf("Squaring elements of the array:\n");
	array_iterator(arr, size, square_element);
	printf("\n");

	return (0);
}
