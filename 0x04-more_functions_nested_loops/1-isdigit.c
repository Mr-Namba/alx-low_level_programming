#include "main.h"
/**
 * _isdigit - checks if the character is digit
 * @c: the character to be checked
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
