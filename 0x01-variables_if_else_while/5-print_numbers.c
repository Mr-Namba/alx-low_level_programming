#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int base_10;

	base_10 = 0;
	while (base_10 < 10)
	{
		printf("%d", base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
