#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destination of concatenates
 * @src: source array to concatenates
 * @n: number of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
