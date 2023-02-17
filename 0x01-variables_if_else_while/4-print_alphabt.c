#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase without q and e.
 * uses a For loop
 * Return: 0 (Success)
 */
int main(void)
{
	int ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr != 'e' && ltr != 'q')
		{
			putchar(ltr);
		}
	}
	putchar('\n');
	return (0);
}
