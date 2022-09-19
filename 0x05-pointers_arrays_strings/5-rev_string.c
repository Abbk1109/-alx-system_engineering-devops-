#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char tmp;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		k++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		tmp = s[i];
		s[i] = s[i];
		s[i] = tmp;
		i--;
	}
}
