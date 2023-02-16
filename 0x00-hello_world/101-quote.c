#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Program prints a string of characters to the standard error.
 * Return: 1 (Success)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59); /*write to stderr*/
	return (1);
}
