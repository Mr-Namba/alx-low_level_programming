#include "main.h"
/**
 * times_table - prints 9 times table 
 * Return: always 0 (success)
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j; 
			_putchar(k + '0');
			_putchar(' ');
			_putchar('\n');
		}
	}
}

