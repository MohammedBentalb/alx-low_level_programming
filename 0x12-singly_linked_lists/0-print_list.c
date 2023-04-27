#include "lists.h"

/**
 * print_list - Function that prints elements of list_t
 * @h: pointer
 * Return: Return n
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			n++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}


return (n);
}
