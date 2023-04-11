#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space in memmory
 * @str: the string
 * Return: pointing to the new mem space
 */
char *_strdup(char *str)
{
	char *new_al;

	unsigned int i;

	unsigned int j;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	new_al = malloc(sizeof(str) * (j + 1));
	if (new_al == 0)
		return (NULL);
	while ((new_al[i] = str[i]) != '\0')
		i++;
	return (new_al);
}
