#include <stdio.h>

/**
 * main - Fizz if multiples of three, print Buzz if
 * @i: first int
 * Return: returns what main is asking for
 */

int main(int i)
{

	for (i = 1; i <= 100; i++)
	{
		if (i < 100)
		{
			printf(" ");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
	}
	return (0);
}
