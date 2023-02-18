#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints single-digit numbers
 * uses a For loop
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
