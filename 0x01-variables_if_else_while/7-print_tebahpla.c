#include <stdio.h>
/**
 * main - entry point
 * Description: reerse alephabet
 * Return: (0)
 */
int main(void)
{
	char i = 'z';

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
