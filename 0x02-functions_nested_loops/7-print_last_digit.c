#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
	{
		last_d = -1 * (n % 10);
		_putchar('0' + last_d);
	}
	else
	{
		last_d = n % 10;
		_putchar('0' + last_d);
	}
	return (last_d);
}
