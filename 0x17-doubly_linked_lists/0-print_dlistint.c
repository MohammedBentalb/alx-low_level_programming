#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Function that prints element in a D-list
 * @h: pointer to first node
 * Return: Return e
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *crr = h;
	unsigned int e = 0;

	while (crr != NULL)
	{
		e++;
		printf("%d\n", crr->n);
		crr = crr->next;
	}
return (e);
}
