#include "main.h"
/**
 * print_line - prints out line
 * @n: numbers of times line is printed
 * Return: always 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('-');
	}
	_putchar('\n');
}
