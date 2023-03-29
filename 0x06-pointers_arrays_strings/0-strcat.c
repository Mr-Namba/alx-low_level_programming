#include "main.h"
/**
 * _strcat - to concatenate
 * @dest: the destination
 * @src: the string
 * Return: always 0 success
 */
char *_strcat(char *dest, char *src)
{
	while (src != '\0')
	{
		src++;
	}
	while (dest != '\0')
	{
		dest++;
	}
	dest = dest + ' ' + src;
	return (dest);
