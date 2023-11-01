#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: unused attribute
 * @argv: first char
 * Return: return name
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
