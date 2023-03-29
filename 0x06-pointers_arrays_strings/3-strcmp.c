#include "main.h"
/**
 * _strcmp - comares strings
 * @s1: first string
 * @s2: second string
 * Return: alway 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, result;

	i = 0;
	j = 0;
	result = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	if ((int)s1[0] > (int)s2[0])
	{
		result = (int)s1[0] - (int)s2[0]
		return (result);
	}
	else if ((int)s1[0] == (int)s2[0])
		return (0);
	else if ((int)s1[0] > (int)s2[0])
	{
		result = (int)s1[0] - (int)s2[0];
		return (result);
	}
}
