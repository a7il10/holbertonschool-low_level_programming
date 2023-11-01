#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: first int
 * @argv: second char
 * Return: return the number of arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
