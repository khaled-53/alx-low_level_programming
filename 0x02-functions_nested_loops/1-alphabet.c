#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
    char i;

    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}

/**
 * main - Entry point of the program
 * Description: Prints the alphabet using print_alphabet function.
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return (0);
}
