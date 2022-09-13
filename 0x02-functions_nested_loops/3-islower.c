#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @c: is the int that will be used in argument of the function.
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
