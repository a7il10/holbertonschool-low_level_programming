#include "main.h"
#include <stddef.h>
/**
 * _strstr - jshbfskjdbcsk
 * @haystack: dsfhbeshkfb
 * @needle: sacdndsjkbv
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
				return (needle);
		}
	}
	return (NULL);
}
