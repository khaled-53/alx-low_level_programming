#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		putchar('\\');
		putchar('\n');
		for (i = 0; i < n-1; i++)
		{
			for (x = -i; x <= 0 ;x++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
