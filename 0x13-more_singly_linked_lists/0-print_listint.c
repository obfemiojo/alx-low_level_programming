#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function ...
 * @h: the list
 *
 * Return: 1 or 0
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int cpt = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		cpt++;
	}
	return (cpt);
}
