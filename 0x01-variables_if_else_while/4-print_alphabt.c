#include <stdio.h>
/**
 * main - entry point
 * Description: print alephabet
 * Return: (0)
 */
int main(void)
{
	char ch;

	char n = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(n);
	return (0);
}
