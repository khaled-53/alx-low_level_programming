#include "main.h"
/**
 * _isalpha - function gamda
 * Description: describe yourself
 * Return: (0) || (1)
 * @c: the parameter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
