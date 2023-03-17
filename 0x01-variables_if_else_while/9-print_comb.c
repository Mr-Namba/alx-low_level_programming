#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;

	i = '0';
	j = '0';
	for (i < '10'; i++)
	{
		for (j < '10'; j++)
			putchar(i','j);
	}
	putchar('\n');
	return (0);
}
