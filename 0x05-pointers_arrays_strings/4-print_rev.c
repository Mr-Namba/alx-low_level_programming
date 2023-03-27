#include "main.h"
/**
 * print_rev - print in reverse
 * @s: the string
 * Return: always 0 success
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (int i = c-1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
