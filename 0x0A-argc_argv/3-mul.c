#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * @argc: command line arguments's number
 * @argv: array contains the program's command line arguments
 * Return: Return 0 (success)
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{	printf("Error , print only two numbers\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
