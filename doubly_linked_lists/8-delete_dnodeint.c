#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: head of the linked list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (index == 0 && current != NULL)
	{
		(*head) = (*head)->next;
		free(current->next->prev);
		current->next->prev = NULL;
		return (1);
	}
	if (current == NULL)
		return (-1);
	while (i < index)
	{
		if (current->next == NULL && i < index)
			return (-1);
		current = current->next;
		i++;
	}
	if (current->next == NULL)
	{
		tmp = current;
		current->prev->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		tmp = current;
		current->next->prev = current->prev;
		current->prev->next = current->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
