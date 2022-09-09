#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in lowercase with `putchar` function
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
