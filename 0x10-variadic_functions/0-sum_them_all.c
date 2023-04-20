#include "variadic_functions.h"
#include <starg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters
 * Return: n == 0, 0. otherwise sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
