#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: return concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n < s2_len)
		s2_len = n;
	concatenated = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < s2_len; j++, i++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';
	return (concatenated);
}
