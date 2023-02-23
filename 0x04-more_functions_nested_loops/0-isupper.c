#include "main.h"

/**
 * _isupper - entry point
 * @c: integer to be checked
 * function checks for uppercase character
 * Return: 1 if true, 0 if false.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
