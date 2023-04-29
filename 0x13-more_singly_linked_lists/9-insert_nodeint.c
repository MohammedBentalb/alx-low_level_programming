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
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	while (idx != 1 && *head)
	{
		idx--;
		add = add->next;
	}
		new->n = n;
		new->next = add->next;
		add->next = new;


return (new);
}
