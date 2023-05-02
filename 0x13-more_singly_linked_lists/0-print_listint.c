#include "list.h"
/**
 * print_listint - prints all linked list elements
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_m print_listint(const listint_m *h)
{
	size_m num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

