#include "main.h"
/**
 * _strlen_recursion - find the length
 * @s: the string
 * Return: is void
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s != '\0')
	{
		n++;
		_strlen_recursion(s + 1);
		return (n);
	}
}
