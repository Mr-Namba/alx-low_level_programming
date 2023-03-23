#include "main.h"
/**
 * more_numbers - ouputs 10 numbers 0-14
 *
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
