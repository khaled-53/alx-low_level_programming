#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of two digits
 * Return: (0)
 */
int main(void)
{
	int i, j, x;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (x = j + 1; x <= 9; x++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + x);
				if (i < 7 || j < 8 || x < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
