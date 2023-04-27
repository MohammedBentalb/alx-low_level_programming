#include "lists.h"

/**
 * list_len - Function that prints the number of ellements
 * @h: pointer
 * Return: Return n
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}



return (n);
}
