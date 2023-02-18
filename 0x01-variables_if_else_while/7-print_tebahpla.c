#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints a reversed  alphabet in lowercase
 * uses a For loop
 * Return: 0 (Success)
 */
int main(void)
{
	int ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
