#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
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
	if (strcmp(s, ops[i].op) == 0)
	{
	return (ops[i].f);
	}
	i++;
	}
	printf("Error\n");
	exit(99);
}
