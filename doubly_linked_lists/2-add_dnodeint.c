#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a node at the beginning
 * @head: head of the linked list
 * @n: data to be added
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
