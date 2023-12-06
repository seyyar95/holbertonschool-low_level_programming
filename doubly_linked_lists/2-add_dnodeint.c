#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_dnodeint - a function that adds a new node at
 *the beginning of a dlistint_t list.
 *
 *@head:  pointer to the dlistint_t list
 *
 * Return: the adress of the new element, or NULL if it failed
 */



dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return(NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
