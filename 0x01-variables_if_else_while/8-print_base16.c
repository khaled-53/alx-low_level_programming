#include <stdio.h>
/**
 * main - entry point
 * Description: reerse alephabet
 * Return: (0)
 */
int main(void)
{
	int i = 0;

	char x = 'a';

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar('0' + i);
	}
	for (x = 'a' ; x <= 'f' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
