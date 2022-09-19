#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function that prints half a string, then a new line.
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
