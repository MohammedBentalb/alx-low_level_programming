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


if (number < 0)
{
	printf("Error\n");
	exit(2);
}


for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", p_to_main[i]);
break;
}
printf("%02hhx ", p_to_maini]);
}
return (0);
}
