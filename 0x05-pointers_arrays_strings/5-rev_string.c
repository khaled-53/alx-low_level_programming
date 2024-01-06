#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i -1;

	char x[len];

	for (j = len; j >= 0; j--)
	{
		s[j] = x[j];
	}

	s = x;
}
