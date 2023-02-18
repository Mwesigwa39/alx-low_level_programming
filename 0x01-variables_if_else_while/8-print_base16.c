#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints all numbers of base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = '0';
	char y;

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
