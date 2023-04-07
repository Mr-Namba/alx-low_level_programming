#include "main.h"
/**
 * check_prime - tho check if numbe is prime
 * @n: the number to be checked
 * @i: the checker
 * Return: result
 */
int check_prime(unsigned int n, unsigned int i)
{
	if (n == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
/**
 * is_prime_number - shows an integer is prime number of note
 * @n: the number to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
