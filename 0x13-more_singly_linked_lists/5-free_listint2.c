#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *addr;

	while (*head)
	{
		addr = (*head)->next;
		free(*head);
		*head = addr;
	}

	*head = NULL;
}

