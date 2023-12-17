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

	char x;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(x);
	}
	putchar(n);
	return (0);
}
