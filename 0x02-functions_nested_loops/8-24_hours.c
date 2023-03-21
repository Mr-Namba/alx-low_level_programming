#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: always 0 (success)
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < 3)
	{
		if (j <= 9; j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			while (k < 6)
			{
				if (l <= 9; l++)
				{
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
				k++;
			}
		}
		i++
	}
}
