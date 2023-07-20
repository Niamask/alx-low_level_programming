#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of list
 * @n: the number of noeud
 *
 * Return: the node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ptr == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;

	return (new);
}
