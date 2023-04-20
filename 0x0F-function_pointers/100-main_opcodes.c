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
	char *p_to_main;
	int number;
	int i;


if (argc != 2)
{
	printf("Error\n");
	exit(1);
}



if (atoi(argv[1]) < 0)
{
	printf("Error\n");
	exit(2);
}

	number = atoi(argv[1]);
	p_to_main = (char *)main;

	for (i = 0; i < number; i++)
	{
		if (i == number  - 1)
	{
		printf("%02hhx\n", p_to_main[i]);
		break;
	}
		printf("%02hhx ", p_to_main[i]);
	}
return (0);
}
