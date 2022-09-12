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
	int d = 48, a = 48;

	while (d < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (d != a && d < a)
			{
				putchar(d);
				putchar(a);

				if (!(d == 56 && a == 57))
				{
					putchar(',');
					putchar('');
				}
			}
			a++
		}
		d++
	}
	putchar('\n');

	return (0);
}
