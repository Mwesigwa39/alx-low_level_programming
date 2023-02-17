#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints all single digits in base 10
 * uses a For loop
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
