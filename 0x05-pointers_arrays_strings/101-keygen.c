#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * description: function generates random passwords for 101-crackme
 * Return: 0
 */
int main(void)
{
	int sum;
	char q;

	srand(time(NULL));
	while (sum <= 2645)
	{
		q = rand() % 128;
		sum = sum + q;
		putchar(q);
	}
	putchar(2772 - sum);
	return (0);
}
