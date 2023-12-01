#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

/**
 * print_normal - print name normally
 * @name: string to print
 **/
void print_normal(char *name)
{
	printf("Name: %s\n", name);
}

/**
 * print_uppercase - print name in uppercase
 * @name: string to print
 **/
void print_uppercase(char *name)
{
	/* Simple function to convert each character to uppercase */
	while (*name != '\0')
	{
		putchar(toupper(*name));
		name++;
	}
	printf("\n");
}

int main(void)
{
	char myName[] = "John Doe";

	printf("Printing name normally:\n");
	print_name(myName, print_normal);

	printf("\nPrinting name in uppercase:\n");
	print_name(myName, print_uppercase);

	return (0);
}

