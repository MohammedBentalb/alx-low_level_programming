#include "lists.h"

/**
 * *free_list - Function that frees a list
 * @head: pointer
 * Return: Return
 */
void free_list(list_t *head)
{
	list_t *addr;

	while(head)
	{
		addr = head->next;
		free(head);
		head = addr;
	}


}
