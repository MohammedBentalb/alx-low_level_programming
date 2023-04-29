#include "lists.h"

/**
 * *add_nodeint - Function that adds a node at the beginning of list
 * @n: value
 * @head: pointer
 * Return: Return new
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);


	new->n = n;
	new->next = *head;

	*head = new;

return (new);
}
