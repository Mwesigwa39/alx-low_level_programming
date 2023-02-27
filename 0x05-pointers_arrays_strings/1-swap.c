#include "main.h"

/**
 * swap_int - entry point
 * description - the function swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
