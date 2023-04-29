#include "lists.h"

/**
 * sum_listint - Function that prints sum of all n in list
 * @head: pointer
 * Return: Return sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
return (sum);
}
