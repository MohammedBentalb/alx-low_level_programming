#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint - Function that adds node in the beginning of a D-list
 * @head: pointer to first node
 * @n: data
 * Return: Return NULL || head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *crr;

	crr = malloc(sizeof(dlistint_t));
	if (crr == NULL)
		return (NULL);

	crr->n = n;
	crr->prev = NULL;
	crr->next = *head;

	if (*head != NULL)
		(*head)->prev = crr;

	*head = crr;
return (*head);
}
