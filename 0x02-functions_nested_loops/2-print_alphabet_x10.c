#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * description - function prints the lowercase
 * alphabet 10 times, followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ltr;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
		_putchar(ltr);
		}
		_putchar('\n');
	}
}
