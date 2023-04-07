#include "main.h"
/**
 * _sqrt_recursion - square rootin using recursion
 * @n: the number
 * Return: give out the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_pow_recursion(n, 0.5));
}
