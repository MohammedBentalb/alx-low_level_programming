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
	dlistint_t *tmp;

	crr = malloc(sizeof(dlistint_t));
	if (crr == NULL)
		return (NULL);

	crr->n = n;
	crr->prev = *head;
	tmp = *head;

	if (tmp == NULL)
		crr->next = NULL;
	else
	{
		crr->next = *head;
		tmp->prev = crr;
	}
	*head = crr;
return (*head);
}
