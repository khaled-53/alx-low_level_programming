#include "main.h"

void print_alphabet(void);
/**
 * main - entry point
 * Description: welo
 * Return: (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
        char i = 'a';

        for (i = 'a'; i <= 'z'; i++)
        {
                putchar(i);
        }
        putchar('\n');
        return;
}
