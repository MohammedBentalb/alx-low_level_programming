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
	listint_t *hd;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL && *head == NULL)
		return (NULL);

	hd = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));

		if (new == 0)
			return (NULL);
		new->n = n;
		new->next = hd;
		*head = new;
		return (new);
	}
	while (hd)
	{
		if (i + 1 == idx)
		{
			new = malloc(sizeof(listint_t));

			if (new == 0)
				return (NULL);
			new->n = n;
			new->next = hd->next;
			hd->next = new;
			return (new);
		}
		hd = hd->next;
		i++;
	}
	return (NULL);
}
