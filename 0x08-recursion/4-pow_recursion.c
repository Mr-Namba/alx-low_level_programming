#include "main.h"
/**
 * _pow_recursion - the power
 * @x: the number to be raised
 * @y: the number of times to be raised
 * Return: the final answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
