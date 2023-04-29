#include "lists.h"

/**
 * *insert_nodeint_at_index - Function adds node
 * @head: pointer
 * @idx: index
 * @n: value
 * Return: Return new || null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add = *head;
	listint_t *new;
	unsigned int i = 0;

	if (!*head)
		return (NULL);

	if (idx == 0)
	{

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
		new->n = n;
		new->next = add;
		add = new;
	return (new);
	}
	while (add)
	{

	if (i == idx - 1)
	{
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
		new->n = n;
		new->next = add->next;
		add->next = new;
		return (new);
	}
	add = add->next;
	i++;
	}

return (NULL);
}
