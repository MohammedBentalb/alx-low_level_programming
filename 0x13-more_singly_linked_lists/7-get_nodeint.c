#include "lists.h"

/**
 * *get_nodeint_at_index - Function that prints the n of a node
 * @head: pointer
 * @index: index
 * Return: Retun the n value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

return (head);
}
