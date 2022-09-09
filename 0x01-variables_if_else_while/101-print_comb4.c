#include <stdio.h>
/**
 * main - main block
 * Description: Prints all possible combinations of three digits.
 * Numbers are seperated by commas and a space.
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same as 0,1,2.
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits.
 * Putchar is the only function that can be used.
 * Putchar can only be used six times maximum in your code
 * THe only variable allowed is `char`
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
