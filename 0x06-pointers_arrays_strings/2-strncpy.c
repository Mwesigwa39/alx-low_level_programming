#include "main.h"

/**
 * _strncpy - entry point
 * description: function copies a string
 * @src: source string
 * @dest: destination string
 * @n: number of bytes in src string
 * Return: pointer to "dest" string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] =  src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
