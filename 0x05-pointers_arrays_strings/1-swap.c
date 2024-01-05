#include "main.h"
/**
 * swap_int - swap
 * Description: swap numbers
 * @a: int1
 * @b: int2
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;

	*b = s;

}
