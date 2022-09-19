#include "main.h"
#include "2-strlen.c"
/**
 * _puts - function that prints a string.
 * Followed by a new line to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
