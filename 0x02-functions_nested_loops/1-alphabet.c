#include "main.h"
/**
 * main - entry point
 * Description: a function that prints the alphabet in lowercase.
 * Followed by a new line.
 * Return: 0
 */
void print_alphabet(void);
{
	char c;

	for  (c = 'a', c <= 'z', c++)
	{
		_putchar(c);
	}
	_putchar('\n');

return (0);
}
