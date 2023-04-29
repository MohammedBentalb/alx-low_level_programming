#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *alt;

	alt = *head;

	while (*head)
	{
		temp = alt->next;
		free(alt);
		alt = temp;
	}

	alt = NULL;
}

