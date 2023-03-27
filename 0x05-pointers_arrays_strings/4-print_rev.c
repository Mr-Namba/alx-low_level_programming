#include "main.h"
/**
 * print_rev - print in reverse
 * @s: the string
 * Return: always 0 success
 */
void print_rev(char *s)
{
	while (*s < '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
