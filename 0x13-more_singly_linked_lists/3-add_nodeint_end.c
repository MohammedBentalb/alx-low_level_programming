#include "lists.h"

/**
 * add_nodeint_end - Function add node at the end of a list
 * @n: value
 * @head: pointer
 * Return: Return new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prv = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (prv->next)
		prv = prv->next;
	prv->next = new;


return (new);
}
