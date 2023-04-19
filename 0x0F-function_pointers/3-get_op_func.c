#include <stdio.h>
#include "3-calc.h"
/**
 * *get_op_func - Function to get the correct opperation function
 * @s: operator
 * Return: Return the correct function || or null
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
