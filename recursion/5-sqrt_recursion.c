#include "main.h"

/**
 * _sqrt - second function
 * @n: first int
 * @root: second int
 * Return: square root
 */

int _sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	else
		return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - first function
 * @n: first int
 * Return: call the second function
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
