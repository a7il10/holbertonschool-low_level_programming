#include "main.h"

/**
 * swap_int - ssdv
 * @a: pointer to integer
 * @b: pointer to integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
