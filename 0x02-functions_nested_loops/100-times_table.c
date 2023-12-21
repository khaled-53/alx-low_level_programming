#include "main.h"
/**
 * print_times_table - Prints a multiplication table up to a specified number.
 * @n: The highest number for the multiplication table (1 to 15 inclusive).
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 0 || n > 15)
	return;
	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
	_putchar('\n');
	}
}
