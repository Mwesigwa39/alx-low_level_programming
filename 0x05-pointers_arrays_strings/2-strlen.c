#include "main.h"

/**
 * _strlen - entry point
 * description - the function returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
