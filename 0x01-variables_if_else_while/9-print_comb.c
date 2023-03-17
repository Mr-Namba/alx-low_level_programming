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
	for (i <= '9'; i++)
	{
		for (j < '9'; j++)
			putchar(i);
			putchar(',');
			putchar(j);
	}
	putchar('\n');
	return (0);
}
