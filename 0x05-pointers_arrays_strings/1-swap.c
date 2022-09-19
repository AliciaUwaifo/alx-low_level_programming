#include "main.h"
/**
 * swap_int(int *a, int *b) - function that swaps the values
 * of two integers.
 * @a: first integer
 * @b: second integer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
