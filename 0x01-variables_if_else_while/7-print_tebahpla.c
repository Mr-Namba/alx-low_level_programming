#include <stdio.h>
#include <ctype>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int alpha, l_alpha;

	alpha = 'A';
	l_alpha = tolower(alpha);
	for (l_alpha = 'z'; l_alpha > 'a'; l_alpha--)
		putchar(l_alpha);
	putchar('\n');
	return (0);
}
