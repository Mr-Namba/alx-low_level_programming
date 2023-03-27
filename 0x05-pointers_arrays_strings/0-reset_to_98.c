#include "main.h"
/**
 * reset_to_98 - resets to 98
 * @n: the parameter to be chnaged
 * Return: always 0 success
 */
void reset_to_98(int *n)
{
	int i;

	i = 98;

	*n = &i;
}
