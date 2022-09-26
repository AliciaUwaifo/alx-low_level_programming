#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination to copy into
 * @src: source to copy from
 * @n: number of times
 * Return: return a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
