#include "main.h"

void reset_to_98(int *n)
{
	*n = 0;

	int p = 98;

	n = &p;
	
	return ;
}
