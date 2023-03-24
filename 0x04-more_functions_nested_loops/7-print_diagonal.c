#include "main.h"
/**
 * print_diagonal - prints line in a diagonal
 * @n: is the number of times / is printed
 * Return: always 0 (success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('\\');
		_puchar('\n');
	}
}
