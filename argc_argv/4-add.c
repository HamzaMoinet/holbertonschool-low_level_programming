#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - multiplies two numbers
 * @argc: all arguments
 * @argv: array of arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for  (i = 1; i < argc; i++)
	{
		for (j = 0;argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
