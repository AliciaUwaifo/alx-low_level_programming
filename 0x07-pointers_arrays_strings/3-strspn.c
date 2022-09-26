#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to go through
 * @accept: accecpted bytes
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (s[j] == '\0')
			return (result);
	}
	return (result);
}
