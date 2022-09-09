#include <stdio.h>
/**
 * main - main block
 * Description: Prints all possible combinations of single numbers.
 * Numbers must be seperated by commas and a space.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable to type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
