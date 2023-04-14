#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: Return p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1, l2, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n > l2)
		n = l2;

	p = malloc(sizeof(char) * (l1 + n + 1));

	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (l1 + n); i++)
	{
	p[i] = s2[i - l1];
	}

	p[i] = '\0';

return (p);
}
