#include <stdio.h>
/**
 * main - a line of code that prints a[2] = 98
 * Followed by a new line
 * Return: return the integer
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Do not forget:
	 * you are not allowed to use a variable
	 * you are not allowed to modify the variable p
	 * write only one statement
	 * you are not allowed to use ,
	 * you are not allowed to code anything else
	 * you are not allowed to use the standard library
	 */
	*(p + 5) = 98;
	/* ...in order to print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
