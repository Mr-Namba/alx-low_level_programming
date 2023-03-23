#include "main.h"
/**
 * print_most_numbers - prints out some numbers
 *
 * Result: always 0 (success)
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	if (i >= 0 && i <= 9 && i != 2 && i != 4)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
