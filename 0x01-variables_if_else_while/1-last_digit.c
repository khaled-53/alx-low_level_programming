#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Declare the variable at the beginning of the block */
    int x = n % 10;

    /* Your code goes here */

    if (x > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, x);
    }
    else if (x != 0 && x < 6)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
    }
    else
    {
        printf("Last digit of %d is 0 and is 0\n", n);
    }

    return (0);
}

