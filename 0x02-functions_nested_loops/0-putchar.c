#include "main.h"
/**
 * main - main block
 * Description: A program that prints `_putchar`, followed by a new line.
 * You are not allowed to use standard libraries.
 * Return: Always return 0
 *
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
