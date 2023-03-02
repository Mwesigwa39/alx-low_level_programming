#include "main.h"

/**
 * _strncat - entry point
 * description: function concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes in src string
 * Return: pointer to the "dest" string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
