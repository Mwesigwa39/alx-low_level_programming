#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number of times the character \ is printed
 * function draws a diagonal line in the terminal.
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
