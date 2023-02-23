#include "main.h"

/**
 * print_line - entry point
 * @n: number of times the character _ is printed
 * function draws a straight line in the terminal.
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
