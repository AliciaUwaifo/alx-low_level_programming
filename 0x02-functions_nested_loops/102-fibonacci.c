#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers.
 * Description: prints the first 50 Fibonacci numbers
 * Return: an integer to signify success or failure
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
