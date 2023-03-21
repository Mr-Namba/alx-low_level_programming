#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c, cl;

	c = 'A';
	cl = tolower(c);
	for (cl = 'a'; cl <= 'z'; cl++)
		_putchar(cl);
	return (0);
}
