#include "lists.h"

/**
 * print_listint - Function prints list
 * @h: pointer
 * Return: Return s
 */
size_t print_listint(const listint_t *h)
{
	unsigned int s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

return (s);

}
