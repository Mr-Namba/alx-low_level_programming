#include "main.h"
/**
 * _strlen_recursion - find the length
 * @s: the string
 * Return: is void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
}
