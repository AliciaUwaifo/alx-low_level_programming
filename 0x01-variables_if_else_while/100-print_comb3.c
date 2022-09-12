#include <stdio.h>
/**
 * main - main block
 * Description: Prints all possible combinations of two digits.
 * Numbers must be seperated by spac.e and commas
 * The two digits must be different.
 * `01` and `10` are considered the same of two digits 0 and 1.
 * Putchar is the only function allowed and can only be used 5 times.
 * The variable `char` is ot allowed.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{	
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
