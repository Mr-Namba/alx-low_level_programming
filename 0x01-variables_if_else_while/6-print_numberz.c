#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int base_10;

	base_10 = 48;

	while (base_10 < 58)
	{
		putchar(base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
