#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: first int
 * @argv: second char
 * Return: the minimum number of the coins
 */

int main(int argc, char *argv[])
{
	int count;
	int change = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	for (count = 0; change > 0; count++)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
	}
	printf("%d\n", count);
	return (0);
}
