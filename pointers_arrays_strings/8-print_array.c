#include "main.h"
#include <stdio.h>

/**
 * print_array - fdvdv
 * @a: djbfjbgf
 * @n: dgnrjkgnng
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar ('\n');
}
