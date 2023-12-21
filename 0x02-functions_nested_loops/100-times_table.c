#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to a specified number.
 * @n: The highest number for the multiplication table (1 to 15 inclusive).
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 0 || n > 15)
	{
		return;
	}
	for (num = 0; num <= n; num++)
	{
		for (mult = 0; mult <= n; mult++)
		{
			prod = num * mult;

			if (mult > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod <= 9 && mult > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod >= 10 && prod <= 99)
			{
				_putchar(' ');
			}
			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
			}
			else if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
