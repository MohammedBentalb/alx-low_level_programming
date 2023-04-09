#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry function
 * @argc: The number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Return 1 || 0
 */
int main(int argc, char *argv[])
{
	int n, cents = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	n = atoi(argv[1]);
while (n > 0)
{
	cents++;
	if (n - 25 >= 0)
	{
	n -= 25;
	continue;
	}
	if (n - 10 >= 0)
	{
	n -= 10;
	continue;
	}
	if (n - 5 >= 0)
	{
	n -= 5;
	continue;
	}
	if (n - 2 >= 0)
	{
	n -= 2;
	continue;
	}
	if (n - 1 >= 0)
	{
	n -= 1;
	continue;
	}
}
	printf("%d\n", cents);
return (0);
}
