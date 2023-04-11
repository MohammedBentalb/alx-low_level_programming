#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Function that returns a pointer to a newly allocated space in memory
 *@str: the string that its value mush be copied inside the memory space
 *Retrun: Return p || 0
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
		return (NULL);


       p = malloc(strlen(str)* sizeof(char));

	if(p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';


return (p);



}
