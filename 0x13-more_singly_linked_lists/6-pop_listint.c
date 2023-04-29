#include "lists.h"

/**
 * pop_listint - Function that delete the head node
 * @head: pointer
 * Return: Return value || 0
 */
int pop_listint(listint_t **head)
{
	listint_t *addr;
	listint_t *alt;
	int value;

	if (!*head)
		return (0);

	alt = *head;
	value = alt->n;
	addr = alt->next;
	free(alt);
	*head = addr;

return (value);
}
