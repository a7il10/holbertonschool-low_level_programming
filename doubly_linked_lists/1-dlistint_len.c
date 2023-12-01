#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print the number of elements
 * @h: head of the linked list
 * Return: return the number of the elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
