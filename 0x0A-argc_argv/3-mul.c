#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int multiplie;

	multiplie = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			multiplie = multiplie * atoi(argv[i]);
		}
		printf("%d\n", multiplie);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
