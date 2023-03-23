#include "main.h"
/**
 * *mul - multiplies two integers
 * @a: character to be multiplied
 * @b: chararacter to be multiplied
 * Return: product of two
 */
int mul(int a, int b);
{
	if (a < 0 && b >= 0)
		return (-(a * b));
	else if (a >= 0 && b < 0)
		return (-(a * b));
	else
		return (a * b);
}
