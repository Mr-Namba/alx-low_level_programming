#include <stdio.h>
#include <unistd.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19 ";

	int i;

	for (i = 0; quote[i] != '\0'; ++i)
		putchar(quote[i]);
	return (1);
}
