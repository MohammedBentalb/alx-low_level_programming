#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry function
 * @argc: number of arguments writen
 * @argv: array of arguments
 * Return: Return 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
