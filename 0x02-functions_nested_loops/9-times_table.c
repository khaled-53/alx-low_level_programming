#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function uses nested loops to calculate and print
 * the products of numbers from 0 to 9 multiplied by each other, following
 * the format of the 9 times table. It ensures proper formatting with commas
 * and spaces, and uses the _putchar function to output characters.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
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
