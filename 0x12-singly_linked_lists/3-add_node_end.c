#include "lists.h"
/**
 * add_node_end - Function to add node at the end
 * @head: pointer
 * @str: pointer
 * Return: Return new || NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *prv;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	prv = *head;

	while (prv->next)
		prv = prv->next;
	prv->next = new;


return (new);
}
