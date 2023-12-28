#include "main.h"
/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n ; i++)
		{
			for (x = 0 ; x < n ; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
