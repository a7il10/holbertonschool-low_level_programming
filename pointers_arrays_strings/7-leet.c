#include "main.h"

/**
 * leet - dygfvh
 * @str: fygrkgku
 * Return: returns str
 */

char *leet(char *str)
{
	int i;
	int j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			str[i] = number[j];
		}
	}
	return (str);
}
