#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int h = 0, i;

	while (str[h] != '\0')
	{
		h++;
	}
	if (h % 2 == 1)
	{
		i = (h - 1) / 2;
		i += 1;
	}
	else
	{
		i = h / 2;
	}
	for (; i < h; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
