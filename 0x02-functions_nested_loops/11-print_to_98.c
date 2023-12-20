#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all integers from n to 98.
 * @n: The starting point.
 */
void print_to_98(int n)
{
	while (n  < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", n);
}
