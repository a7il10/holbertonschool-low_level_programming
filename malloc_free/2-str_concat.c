#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: return the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concate;
	int str_len1 = 0;
	int str_len2 = 0;
	int total_length;
	int i;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1[str_len1] != '\0')
		str_len1++;

	while (s2[str_len2] != '\0')
		str_len2++;

	total_length = str_len1 + str_len2;
	concate = malloc(sizeof(char) * (total_length + 1));
	if (concate == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concate[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		concate[str_len1 + i] = s2[i];
	return (concate);
}
