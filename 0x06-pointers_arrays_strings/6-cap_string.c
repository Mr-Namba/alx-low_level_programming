#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalize the string
 * @a: the string
 * Return: returns the character
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (!isalpha(a[i - 1]) && !isdigit(a[i - 1]) && isalpha(a[i]))
			a[i] = toupper(a[i]);
	}
	return (a);
}


