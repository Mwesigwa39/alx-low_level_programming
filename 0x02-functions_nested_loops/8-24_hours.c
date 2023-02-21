#include "main.h"

/**
 * jack_bauer - entry point
 * prints every minute of the day
 * assume the time-format Hr : Mn where
 * H is hrs in 10s, r is hrs in 1s,
 * M is mins in 10s, n is mins in 1s.
 * Return: void
 */

void jack_bauer(void)
{
	int H, r, M, n;

	for (H = 0; H <= 2; H++)
	{
		for (r = 0; r <= 9; r++)
		{
			if ((H <= 1 && r <= 9) || (H <= 2 && r <= 3))
			{
				for (M = 0; M <= 5; M++)
				{
					for (n = 0; n <= 9; n++)
					{
						_putchar(H + '0');
						_putchar(r + '0');
						_putchar(':');
						_putchar(M + '0');
						_putchar(n + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
