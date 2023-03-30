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
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i] = a[i];
		}
		else if (a[i] >= 0 && a[i] <= 9)
			a[i] = a[i];
		else if (a[i] == ' ')
			a[i + 1] = toupper(a[i + 1]);
		else
			a[i + 1] = toupper(a[i + 1]);
	}
	return (a);
}


