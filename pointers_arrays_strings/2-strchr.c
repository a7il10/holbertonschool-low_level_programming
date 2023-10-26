#include "main.h"

/**
 * _strchr - shjfbsbf
 * @s: sjfbjef
 * @c: ejfnjeknf
 * Return: akhfgshbf
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	else{
		return (*s);
	}
}
