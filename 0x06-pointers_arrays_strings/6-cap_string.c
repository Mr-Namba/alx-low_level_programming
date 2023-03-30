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

	if (isalpha(a[0]))
		a[0] = toupper(a[0]);
	for (i = 1; a[i] != '\0'; i++)
	{
		if (!isalpha(a[i - 1]) && !isdigit(a[i - 1]) && isalpha(a[i]))
			a[i] = toupper(a[i]);
		else if ((a[i - 1] == '\n' || a[i - 1] == '\t') && isalpha(a[i]))
			a[i] = toupper(a[i]);
		else if (a[i - 1] == ' ' && isalpha(a[i]))
			a[i] = toupper(a[i]);
	}
	return (a);
}
