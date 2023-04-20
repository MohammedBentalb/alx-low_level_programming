#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Return 0 (succes)
 */

int main(int argc, char *argv[])
{
	char *p_to_main = (char *)main;
	int number;
	int i;

	number = atoi(argv[1]);

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}


if (number <= 0)
{
	printf("Error\n");
	exit(2);
}


	for (i = 0; i < number; i++)
	{
		printf("%02x ", p_to_main[i]);
	}
	printf("\n");

return (0);
}
