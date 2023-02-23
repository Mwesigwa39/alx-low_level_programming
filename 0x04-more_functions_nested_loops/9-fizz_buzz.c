#include <stdio.h>

/**
 * main - entry point
 * prints numbers from 1 to 100,
 * prints FizzBuzz for numbers divisible by 3 and 5,
 * prints Fizz for numbers divisible by 3,
 * prints Buzz for numbers divisible by 5,
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d\040", i);
		}
	}
	printf("\n");
	return (0);
}
