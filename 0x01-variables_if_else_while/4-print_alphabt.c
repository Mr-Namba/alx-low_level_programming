#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha, l_alpha;

	alpha = 'A';
	l_alpha = tolower(alpha);
	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha != 'q'; l_alpha != 'e'; ++l_alpha)
		putchar(l_alpha);
	putchar('\n');
	return (0);
}
