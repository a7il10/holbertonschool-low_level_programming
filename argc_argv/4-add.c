#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: first int
 * @argv: second char
 * Return: returns added positive numbers
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;


	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

	}
		printf("%d\n", sum);
		return (0);

}
