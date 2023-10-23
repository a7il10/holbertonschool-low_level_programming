#include "main.h"

/**
 * _strlen - sjbfsjdnn
 * @s: pointer to char
 * Return: returns the number of characters
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
