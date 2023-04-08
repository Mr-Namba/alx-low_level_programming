#include "main.h"
/**
 * is_palindrome - confirms is a string is palindrome
 * @s: the string
 * Return: returns integers
 */
int is_palindrome(char *s)
{
	char *r;

	r = _print_rev_recursion(char *s);
	if (r == s)
		return (1);
	return (0);
}

