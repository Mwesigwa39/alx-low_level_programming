#include <stdio.h>
#include "main.h"

/**
 * print_array - entry point
 * description - function prints `n` elements of an array of integers
 * Numbers must be separated by comma and space
 * and should be displayed in the same order they are stored in array
 * @a: int type array pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
