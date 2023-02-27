#include "main.h"

/**
 * _puts - entry point
 * description - a function that prints a string
 * followed by a new line, to stdout
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
