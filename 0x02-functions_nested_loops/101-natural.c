#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block.
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int counter, sum;

	sum = 0;
	for (counter = 1; counter < 1024; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum += counter;
		}
	}
	printf("%d\n", sum);

	return (0);
}
