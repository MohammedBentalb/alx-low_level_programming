#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes a node at index
 * @index: index
 * @head: pointer
 * Return: Return 1 || -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv = NULL;
	listint_t *alt = *head;
	unsigned int i;

	if (index == 0)
	{
		*head = (*head)->next;
		free(alt);
		return (1);
	}

	for (i = 0; i < index && alt; i++)
	{
		prv = alt;
		alt = alt->next;
	}
	if (!alt)
		return (-1);

	prv->next = alt->next;
	free(alt);
	return (1);
}
