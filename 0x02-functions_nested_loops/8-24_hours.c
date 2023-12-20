#include "main.h"
/**
 * jack_bauer - Prints every minute of the day in 24-hour format.
 *
 * Description: This function iterates through every hour (0-23)
 * and every minute (0-59) of the day, printing the time in the
 * format HH:MM.
 */
void jack_bauer(void)
{
	int x, i;

	for (x = 0 ; x <= 23 ; x++)
	{
		for (i = 0; i <= 59; i++)
		{
			int r = i % 10;

			int s = i / 10;

			int d = x % 10;

			int w = x / 10;

			_putchar(w + '0');
			_putchar(d + '0');
			_putchar(':');
			_putchar(s + '0');
			_putchar(r + '0');
			_putchar('\n');
		}
	}
}
