#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Return: always 0 success
 */
int main(void)
{
	int bsix, l_bsix;

	bsix = '0x0';
	l_bsix = tolower(bsix);
	while (l_bsix <= 'f')
	{
		putchar(l_bsix);
		l_bsix++;
	}
	putchar('\n');
	return (0);
}
