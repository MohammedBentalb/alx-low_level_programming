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
	listint_t *new, *prv = NULL;
	unsigned int i = 0;

	if (head == NULL)
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
	while (i < idx && add != NULL)
	{
		i++;
		prv = add;
		add = add->next;
	}
	if (i != idx)
		return (NULL);
	
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = add;
	if (prv)
		prv->next = new;
	else
		*head = new;

return (new);
}
