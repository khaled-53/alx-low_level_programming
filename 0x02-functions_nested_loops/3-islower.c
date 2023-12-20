#include "main.h"
/**
 * _islower - wow
 * Description: wowooww
 * Return: (0) || (1)
 * @c: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (0);
}
