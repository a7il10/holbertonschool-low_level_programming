#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position
 *@h: head node;
 *@idx: index to be inserted;
 *@n: n value of the new node
 *Return: addres of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	int i = 0;

	if ((*h) == NULL || idx == 0)
		new_node = add_dnodeint(&(*h), n);
	else
	{
		while (i < (int) idx - 1)
		{
			if ((*h) == NULL)
				return (NULL);
			h = &((*h)->next);
			i++;
		}

		if ((*h)->next == NULL)
			new_node = add_dnodeint_end(&(*h), n);
		else
		{
			new_node = malloc(sizeof(dlistint_t));
			new_node->n = n;

			if (!new_node)
			{
				free(new_node);
				return (NULL);
			}
			new_node->next = (*h)->next;
			new_node->prev = *h;
			(*h)->next->prev = new_node;
			(*h)->next = new_node;
		}
	}
	return (new_node);
}
