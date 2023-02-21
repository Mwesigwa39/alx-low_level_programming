#include "main.h"

/**
 * print_alphabet - entry point
 * description - prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
	_putchar(ltr);
	}
	_putchar('\n');
}
