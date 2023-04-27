#include "lists.h"
/**
 * *add_node - Function that add a node at the beginning
 * @head: pointer
 * @str: pointer
 * Return: Return new
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
return (new);
}
