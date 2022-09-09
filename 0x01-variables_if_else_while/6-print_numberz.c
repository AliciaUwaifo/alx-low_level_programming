#include <stdio.h>
/**
 * main - main block
 * Description: Prints numbers of base 10 starting from 0 with putchar
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
