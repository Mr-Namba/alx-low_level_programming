#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: the array of parameters
 * Return: 0 for succes
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	return (0);
}
