#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: first int
 * @argv: second char
 * Return: return name
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
