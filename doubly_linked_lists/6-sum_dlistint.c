#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: head of the linked list
 * Return: returns the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
