#include <stdio.h>

/**
 * main - entry point
 * program finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
	long div = 2;
	long largPrimF = 0;

	while (num != 0)
	{
		if (num % div == 0)
		{
			num = num / div;
			largPrimF = div;
		}
		div += 1;
	}
	printf("%ld\n", largPrimF);
	return (0);
}
