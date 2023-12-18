#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers also
 * Return: (0)
 */
int main(void)
{
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
