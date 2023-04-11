#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of the array
 * @c: characters of the sring
 * Return: null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
