#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry
 * @argc: the count of arguments
 * @argv: the array of parameters
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	int prod;

	prod = atoi(argv[1]) * atoi(argv[2]);
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
		printf("%d\n", prod);
	return (0);
}
