#include "main.h"
/**
 * print_last_digit - prints out last digit of number
 * @n: number to be checked
 * Return: always l
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l + '0');
	return (l);
}
