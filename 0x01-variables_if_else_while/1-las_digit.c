#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main entry
 * Description: a program that will assign a random number to the variable n 
 * Return: 0
 */
int main(void)
{
	int n;
	int z;
	srand(time(0));
	n = rand(0 - RAND_MAX / 2;
	z = (n % 10);
	if (z > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, z);
	else if (z == 0)
	{
	printf("%d and is 0\n", z);
	}
	else if (z < 6 && z != 0)
	{ 
	printf("%d and is less than 6 and not 0\n", z);
	}
	Return (0);
	}
