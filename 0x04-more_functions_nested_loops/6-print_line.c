#include "main.h"
/**
 * print_line - prints out line
 * @n: numbers of times line is printed
 * Return: always 0 (success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
