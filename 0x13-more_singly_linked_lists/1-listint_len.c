#include "lists.h"

/**
 * listint_len - returns the matters of elements
 * @h: head of a list
 *
 * Return: number of nodes.
 */
size_t listint_len(const loistint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
