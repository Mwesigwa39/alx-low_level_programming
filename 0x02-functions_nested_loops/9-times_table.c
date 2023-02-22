#include "main.h"

/**
 * times_table - entry point
 * function that prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int row, col, pdt, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			pdt = row * col;
			tens = pdt / 10;
			ones = pdt % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (pdt < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
