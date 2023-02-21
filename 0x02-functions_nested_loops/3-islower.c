#include "main.h"

/**
 * _islower - entry point
 * function checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if true. 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
