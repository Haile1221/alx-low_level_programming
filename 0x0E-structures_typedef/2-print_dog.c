#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n",
			(d->name != NULL) ? d->name : "(nil)",
			d->age,
			(d->owner != NULL) ? d->owner : "(nil)");
}

