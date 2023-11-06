#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: string
 * Return: duplicate if it is true
 */

char *_strdup(char *str)
{
	int len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	duplicate = (char *)malloc(len + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
