#include "main.h"
/**
 * firststep - the first step to the solution
 * @n: the number to be raised
 * @i: the square root checker
 * Return: the final answer
 */
int firststep(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (firststep(n, i + 1));
}
/**
 * _sqrt_recursion - square rootin using recursion
 * @n: the number
 * Return: give out the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (firststep(n, 0));
}
