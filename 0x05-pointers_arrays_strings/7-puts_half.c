#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		h++;
	}
	for (h /= 2; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
