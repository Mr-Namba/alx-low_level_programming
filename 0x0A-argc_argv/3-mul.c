#include <stdio.h>
/**
 * main - entry
 * @argc: the count of arguments
 * @argv: the array of parameters
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	int prod;

	prod = argv[1] * argv[2];
	if (argc < 3)
		printf("%d\n", prod);
	else
		printf("error\n");
	return (0);
}
