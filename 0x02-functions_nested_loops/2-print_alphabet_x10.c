#include "main.h"

/**
 * print_alphabet_x10 - pcrint x10
 * Description: read aove
 */
void print_alphabet_x10(void)
{
	char i = 'a';

	int x = 0;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
