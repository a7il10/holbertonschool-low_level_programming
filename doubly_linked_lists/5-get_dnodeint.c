#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the linked list
 * @index: index of the node
 * Return: returns the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
