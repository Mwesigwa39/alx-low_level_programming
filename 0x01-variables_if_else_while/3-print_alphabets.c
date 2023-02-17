#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the alphabet in in both cases, followed by \n
 * uses a For loop
 * Return: 0 (Success)
 */
int main(void)
{
	int ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		putchar(ltr);
	}
	for (ltr = 'A'; ltr <= 'Z'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
